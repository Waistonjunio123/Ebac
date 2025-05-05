#include <stdio.h> //biblioteca de comunicação com o usuário 
#include <stdlib.h> //biblioteca de alocação de espaço em memória 
#include <locale.h>  //biblioteca de alocação de texto por região 
#include <string.h> //blioteca de resposavel de cuida das string 

int registro( ) // função responsavel por cadastrar o usuário no sistema 
{
	//inicio da criação variáveis/string 
	char arquivo [40];
	char cpf[40];
	char nome [40];
	char sobrenome[40];
	char cargo[40];
	//final da criação variáveis/string
	 
    printf("Digite o CPF a ser cadastrado:"); // colentando informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo,cpf); //Reponsavel por copiar os valores das string 
	
	FILE *file; // cria aquivo
	file = fopen(arquivo, "w"); // cria arquivo e a "W" sognifica escrever
	fprintf(file,cpf); // salva o valor da variavel 
	fclose(file); // fecha arquivo 
	
	file = fopen (arquivo, "a"); // coletando arquivo do usuário 
	fprintf(file,","); 
	fclose(file);
	
	printf("digite seu nome a ser cadrastado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);

    file = fopen (arquivo, "a");
	fprintf(file,",");
	fclose(file);
    printf("digite seu sobrenome a se cadastrado: ");
   
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen (arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
    fprintf(file,cargo);
	fclose(file);
	system("pause");

}

int consulta ()

{
   char cpf [40];
   char conteudo[200];
   printf("digite o CPF a ser consultado:");
   scanf("%s",cpf);
   
   FILE*file;
   file = fopen(cpf,"r");
   
   if(file==NULL)
   { 
   printf(" Não foi possivel abrir o arquivo, não localizado!.\n");
   }
   while (fgets(conteudo,200,file) !=NULL)
   {
   	printf("\nEssa são as informaçãoes do usúario : ");
   	printf("%s",conteudo);
   	printf("\n\n");
   }
   
   system ("pause");
}               

int deletar ()
{
 char cpf [40];
 printf("Digite o CPF do usuário ser deletado:");
 scanf("%s",cpf);
 
 remove(cpf);
 
 FILE *file;
 file=fopen(cpf,"r");
 
 if( file == NULL)
 { 
 printf("O usuário não se encontra no sistema!.\n");
 system("pause");
 }
}

int main()  

  {
 int opcao=0; // definindo varíaveis 
 int laco=1;
 for (laco=1;laco=1;)
  {

 
 system("cls");
 

setlocale(LC_ALL, "portuguese" ); // definição da linguagem 

 
 printf(" ###Cartório da EBAC ### \n\n "); // inicio do menu 
 printf("Escolha opção desejada do menu \n\n");
 printf("\t1 - registrar nomes \n ");
 printf("\t2 - consutar nomes \n ");
 printf("\t3 - Deletar nomes\n\n");
 printf("opção: "); // fim do menu 
 
 scanf("%d", &opcao); // armazenando a escolha do usúario 
 
 system("cls"); // responsavel de limpar tela do usuário 
   
  
   switch (opcao) // inicio da seleção menu 
  {
  
  
   case 1:
   registro(); // chamada de função 
   break;
 	
   case 2:
   consulta();
   break;
  
   case 3:
   deletar();
   break; 
   
   default:
   printf("Essa opção não esta disponivel!\n");
   system("pause");
   break;
}  // fim da seleção

  }
}



    
 


