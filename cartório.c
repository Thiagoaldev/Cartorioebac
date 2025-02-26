#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string


int registro()//função responsavel por cadastrar os usuário no sistema
{
	
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char email[60];
	char cargo[40];
	//final criação de variáveis/string
	
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	 printf("Digite o CPF a ser cadastrado: ");//coletando informação do usuário
 	 scanf("%s", cpf);//%s refere-se a string
	
  	 strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
 	 FILE *file; //cria o arquivo
	 file = fopen(arquivo, "w"); // cria o arquivo e o"w" significa escrever
	 fprintf(file,cpf); //salvo o arquivo da variavel
	 fclose(file); // fecha o arquivo
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,","); //cria o arquivo
	 fclose(file);// fecha o arquivo
	
	 printf("Digite o nome a ser cadastrado: ");//coletando informação do usuário
	 scanf("%s",nome);//%s refere-se a string
	
	 file = fopen(arquivo, "a");//cria o arquivo o "a" representa a string
	 fprintf(file,nome);//salvo o arquivo da variavel
	 fclose(file); // fecha o arquivo
	
	 file= fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,",");//cria o arquivo
	 fclose(file); // fecha o arquivo
	
	 printf("Digite o sobrenome a ser cadastrado: ");//coletando informação do usuário
	 scanf("%s",sobrenome);//%s refere-se a string
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,sobrenome);//salvo o arquivo da variavel
	 fclose(file);// fecha o arquivo
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
 	 fprintf(file,",");//cria o arquivo
	 fclose(file);// fecha o arquivo
	
	printf("Digite o email a ser cadastrado: ");//coletando informação do usuário
	 scanf("%s",email);//%s refere-se a string
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
	 fprintf(file,email);//salvo o arquivo da variavel
	 fclose(file);// fecha o arquivo
	
	 file = fopen(arquivo,"a");//cria o arquivo o "a" representa a string
 	 fprintf(file,",");//cria o arquivo
	 fclose(file);// fecha o arquivo
	 
	 printf("Digite o cargo a ser cadastrado: ");//coletando informação do usuário
	 scanf("%s",cargo);//%s refere-se a string
	
	 file = fopen(arquivo, "a");//cria o arquivo o "a" representa a string
	 fprintf(file,cargo);//salvo o arquivo da variavel
	 fclose(file);// fecha o arquivo
	
	 system("pause");//pausa a pagina exp. para ler ou selecionar alguma coisa
 
}

int consulta()//função responsavel por consultar os usuário no sistema
{
	 setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	 
	//inicio criação de variáveis/string
	char cpf[40];
	char conteudo[200];
	//final criação de variáveis/string

	 printf("Digite o CPF a ser consultado: ");//coletando informação do usuário
	 scanf("%s",cpf);//%s refere-se a string
	
	 FILE *file;//cria o arquivo
	 file = fopen(cpf,"r");//cria o arquivo o "r" é para ler o arquivo
	
	if(file == NULL)//cria o arquivo e o NULL é uma constante usada para representar um ponteiro nulo, ou seja, um ponteiro que não aponta para nenhum endereço válido na memória.
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//cria o arquivo e o NULL é uma constante usada para representar um ponteiro nulo, ou seja, um ponteiro que não aponta para nenhum endereço válido na memória.
	{
		printf("\nEssas são as informações de usuário: ");//mostrando as informações do usuario
		printf("%s", conteudo);//%s refere-se a string
		printf("\n\n");
	}
	
	system("pause");//pausa a pagina exp. para ler ou selecionar alguma coisa
	
}

int deletar()//função responsavel por deletar os usuário no sistema
{
	//inicio criação de variáveis/string
	char cpf[40];
	//final criação de variáveis/string
	
	 printf("Digite o CPF do usuário a ser deletado: ");//pedindo a informação para do usuário
	 scanf("%s",cpf);//%s refere-se a string
	
	 remove(cpf);//comando para deletar
	
	 FILE *file;//cria o arquivo
	 file = fopen(cpf,"r"); //abrindo o arquivo cpf com comando "r" para leitura
	
if(file == NULL)//cria o arquivo e o NULL é uma constante usada para representar um ponteiro nulo, ou seja, um ponteiro que não aponta para nenhum endereço válido na memória.
	{
     printf("O usuário foi deletado!.\n");//informando que o usuáario foi deletado
     system("pause");//pausa a pagina exp. para ler ou selecionar alguma coisa
	
}

}

int main()//cria as variáveis
{

	 int opcao=0; //definindo variáveis
	 int laco=1;//valor da variavel
	
	 for(laco=1;laco=1;)
	{
	

	 system("cls");system("cls");//system("cls") chama uma linha de comando do sistema operacional que limpa a tela inteira 
	 
	 
    setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	 printf("### cartório da EBAC ###\n\n"); //inicio do menu
	 printf("Escolha a opção desejada do menu:\n\n");
	 printf("\t1 - Registrar nomes\n");
	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n\n"); 
	 printf("\t4 - Sair do sistema\n\n");
	 printf("Opção:");//fim do menu
	
	 scanf("%d", &opcao); //armazenando a escolha do usuário
	
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
	     printf("essa opção não está disponivel!\n");//para algum numero incorreto
		 system("pause");
		 break;
	 }//fim da seleção
	     	
	 }
}	
