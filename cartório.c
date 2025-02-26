#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string


int registro()//fun��o responsavel por cadastrar os usu�rio no sistema
{
	
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char email[60];
	char cargo[40];
	//final cria��o de vari�veis/string
	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	 printf("Digite o CPF a ser cadastrado: ");//coletando informa��o do usu�rio
 	 scanf("%s", cpf);//%s refere-se a string
	
  	 strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
 	 FILE *file; //cria o arquivo
	 file = fopen(arquivo, "w"); // cria o arquivo e o"w" significa escrever
	 fprintf(file,cpf); //salvo o arquivo da variavel
	 fclose(file); // fecha o arquivo
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,","); //cria o arquivo
	 fclose(file);// fecha o arquivo
	
	 printf("Digite o nome a ser cadastrado: ");//coletando informa��o do usu�rio
	 scanf("%s",nome);//%s refere-se a string
	
	 file = fopen(arquivo, "a");//cria o arquivo o "a" representa a string
	 fprintf(file,nome);//salvo o arquivo da variavel
	 fclose(file); // fecha o arquivo
	
	 file= fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,",");//cria o arquivo
	 fclose(file); // fecha o arquivo
	
	 printf("Digite o sobrenome a ser cadastrado: ");//coletando informa��o do usu�rio
	 scanf("%s",sobrenome);//%s refere-se a string
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,sobrenome);//salvo o arquivo da variavel
	 fclose(file);// fecha o arquivo
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
 	 fprintf(file,",");//cria o arquivo
	 fclose(file);// fecha o arquivo
	
	printf("Digite o email a ser cadastrado: ");//coletando informa��o do usu�rio
	 scanf("%s",email);//%s refere-se a string
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,email);//salvo o arquivo da variavel
	 fclose(file);// fecha o arquivo
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
 	 fprintf(file,",");//cria o arquivo
	 fclose(file);// fecha o arquivo
	 
	 printf("Digite o cargo a ser cadastrado: ");//coletando informa��o do usu�rio
	 scanf("%s",cargo);//%s refere-se a string
	
	 file = fopen(arquivo, "a");//cria o arquivo o "a" representa a string
	 fprintf(file,cargo);//salvo o arquivo da variavel
	 fclose(file);// fecha o arquivo
	
	 system("pause");//pausa a pagina exp. para ler ou selecionar alguma coisa
 
}

int consulta()//fun��o responsavel por consultar os usu�rio no sistema
{
	 setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	 
	//inicio cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
	//final cria��o de vari�veis/string

	 printf("Digite o CPF a ser consultado: ");//coletando informa��o do usu�rio
	 scanf("%s",cpf);//%s refere-se a string
	
	 FILE *file;//cria o arquivo
	 file = fopen(cpf,"r");//cria o arquivo o "r" � para ler o arquivo
	
	if(file == NULL)//cria o arquivo e o NULL � uma constante usada para representar um ponteiro nulo, ou seja, um ponteiro que n�o aponta para nenhum endere�o v�lido na mem�ria.
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//cria o arquivo e o NULL � uma constante usada para representar um ponteiro nulo, ou seja, um ponteiro que n�o aponta para nenhum endere�o v�lido na mem�ria.
	{
		printf("\nEssas s�o as informa��es de usu�rio: ");//mostrando as informa��es do usuario
		printf("%s", conteudo);//%s refere-se a string
		printf("\n\n");
	}
	
	system("pause");//pausa a pagina exp. para ler ou selecionar alguma coisa
	
}

int deletar()//fun��o responsavel por deletar os usu�rio no sistema
{
	//inicio cria��o de vari�veis/string
	char cpf[40];
	//final cria��o de vari�veis/string
	
	 printf("Digite o CPF do usu�rio a ser deletado: ");//pedindo a informa��o para do usu�rio
	 scanf("%s",cpf);//%s refere-se a string
	
	 remove(cpf);//comando para deletar
	
	 FILE *file;//cria o arquivo
	 file = fopen(cpf,"r"); //abrindo o arquivo cpf com comando "r" para leitura
	
if(file == NULL)//cria o arquivo e o NULL � uma constante usada para representar um ponteiro nulo, ou seja, um ponteiro que n�o aponta para nenhum endere�o v�lido na mem�ria.
	{
     printf("O usu�rio foi deletado!.\n");//informando que o usu�ario foi deletado
     system("pause");//pausa a pagina exp. para ler ou selecionar alguma coisa
	
}

}

int main()//cria as vari�veis
{

	 int opcao=0; //definindo vari�veis
	 int laco=1;//valor da variavel
	
	 for(laco=1;laco=1;)
	{
	

	 system("cls");system("cls");//system("cls") chama uma linha de comando do sistema operacional que limpa a tela inteira 
	 
	 
    setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	 printf("### cart�rio da EBAC ###\n\n"); //inicio do menu
	 printf("Escolha a op��o desejada do menu:\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n"); 
	 printf("\t4 - Sair do sistema\n\n");
	 printf("Op��o:");//fim do menu
	
	 scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
	 system("cls");//system("cls") chama uma linha de comando do sistema operacional que limpa a tela inteira 
	
	 switch(opcao)//variaveis
	 {
	     case 1:
	     registro();
	     break;
	     
	     case 2:
	     consulta();
	     break;
	     
	     case 3:
	     deletar();
	     break;
	     
	     case 4:
	     printf("Obrigado por utilizar o sistema!\n");
	     return 0;
	     break;
		 	
	     default:
	     printf("essa op��o n�o est� disponivel!\n");//para algum numero incorreto
		 system("pause");
		 break;
	 }//fim da sele��o
	     	
	 }
}	
