#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h>  //biblioteca de aloca��o de texto por regi�o 
#include <string.h> //blioteca de resposavel de cuida das string 

int registro( ) // fun��o responsavel por cadastrar o usu�rio no sistema 
{
	//inicio da cria��o vari�veis/string 
	char arquivo [40];
	char cpf[40];
	char nome [40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o vari�veis/string
	 
    printf("Digite o CPF a ser cadastrado:"); // colentando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo,cpf); //Reponsavel por copiar os valores das string 
	
	FILE *file; // cria aquivo
	file = fopen(arquivo, "w"); // cria arquivo e a "W" sognifica escrever
	fprintf(file,cpf); // salva o valor da variavel 
	fclose(file); // fecha arquivo 
	
	file = fopen (arquivo, "a"); // coletando arquivo do usu�rio 
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
   printf(" N�o foi possivel abrir o arquivo, n�o localizado!.\n");
   }
   while (fgets(conteudo,200,file) !=NULL)
   {
   	printf("\nEssa s�o as informa��oes do us�ario : ");
   	printf("%s",conteudo);
   	printf("\n\n");
   }
   
   system ("pause");
}               

int deletar ()
{
 char cpf [40];
 printf("Digite o CPF do usu�rio ser deletado:");
 scanf("%s",cpf);
 
 remove(cpf);
 
 FILE *file;
 file=fopen(cpf,"r");
 
 if( file == NULL)
 { 
 printf("O usu�rio n�o se encontra no sistema!.\n");
 system("pause");
 }
}

int main()  

  {
 int opcao=0; // definindo var�aveis 
 int laco=1;
 for (laco=1;laco=1;)
  {

 
 system("cls");
 

setlocale(LC_ALL, "portuguese" ); // defini��o da linguagem 

 
 printf(" ###Cart�rio da EBAC ### \n\n "); // inicio do menu 
 printf("Escolha op��o desejada do menu \n\n");
 printf("\t1 - registrar nomes \n ");
 printf("\t2 - consutar nomes \n ");
 printf("\t3 - Deletar nomes\n\n");
 printf("op��o: "); // fim do menu 
 
 scanf("%d", &opcao); // armazenando a escolha do us�ario 
 
 system("cls"); // responsavel de limpar tela do usu�rio 
   
  
   switch (opcao) // inicio da sele��o menu 
  {
  
  
   case 1:
   registro(); // chamada de fun��o 
   break;
 	
   case 2:
   consulta();
   break;
  
   case 3:
   deletar();
   break; 
   
   default:
   printf("Essa op��o n�o esta disponivel!\n");
   system("pause");
   break;
}  // fim da sele��o

  }
}



    
 


