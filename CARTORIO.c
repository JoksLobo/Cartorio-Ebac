#include <stdio.h> //Biblioteca de Comunica��o com o Usu�rio
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro()//Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//Inicio de cria��o de var�aveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de var�aveis
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informa��o do usu�rio
	scanf("%s,", cpf);//%s refere-se �s strings
	
	strcpy(arquivo, cpf);//respons�vel por copiar os valores das strings
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecho o arquivo
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, ",");//insere v�rgula entre as informa��es
	fclose(file);//fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//coleta a informa��o "nome" do usu�rio
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, nome);//salva o valor da vari�vel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, ",");//insere v�rgula entre as informa��es
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//coleta a informa��o "sobrenome" do usu�rio
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, sobrenome);//salva o valor da var�avel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, ",");// insere v�rgula entre as informa��es
	fclose(file);//fecha p arquivo
	
	printf("Digite cargo a ser cadastrado: ");//coleta a informa��o "cargo" do usu�rio
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, cargo);//salava o valor da var�avel
	fclose(file);//fecha o arquivo
	
	system("pause");
	
	
}
int consulta()
{
	setlocale(LC_ALL, "portuguese");//definindo a linguagem
	char cpf[40];
	char conteudo[200];
	
	printf("\tDigite o CPF a ser consultado: \n\n");//coleta o CPF do usu�rio a ser consultado
	scanf("%s",cpf);
	
	FILE *file;//abre o arquivo
	file = fopen(cpf,"r");//abre e l� o arquivo "CPF"
	
	if(file == NULL)//se o CPF do usu�rio informado n�o estiver cadastrado no banco de dados
	{
		printf("\tN�o foi poss�vel abrir o arquivo, n�o localizado!.\n\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//se o CPF do usu�rio informado estiver cadastrado no banco de dados
	{
		printf("\tEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	system("pause");
}

int deletar()
{
	char cpf[40];
	printf("\tDigite o CPF do usu�rio a ser deletado: ");//coleta o CPF do usu�rio a ser deletado do banco de dados
	scanf("%s", cpf);
	
	remove(cpf);//remove o arquivo do usu�rio do banco de dados
	
	FILE *file;//abre arquivo
	file = fopen(cpf, "r");//abre e l� (r) o arquivo
	
	if(file == NULL)//Se o cpf do usu�rio informado n�o constar no banco de dados
	{
		printf("\tO usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
}
int main (){
	
	int opcao=0;//Definindo var�aveis
	int laco=1;
	for(laco=1; laco=10;){
		
		system("cls");
	
	
	setlocale(LC_ALL, "portuguese");//Definindo a linguagem
	
	printf("\t### Cart�rio da EBAC ###\n\n");//inicio do menu
	printf("\tEscolha uma das op��es abaixo:\n\n");
	printf("\t1 - Registrar aluno\n");
	printf("\t2 - Consultar registros\n");
	printf("\t3 - Deletar registro\n");
	printf("\t4 - Sair do sistema\n");
	printf("Op��o: ");//fim do menu
	
	scanf("%d", &opcao);//armazenando a escolha do usuario
	
	system("cls");//respons�vel por limpar a tela
	
	switch(opcao)//Inicio da sele��o do menu
	{
		case 1://se o usu�rio escolher registrar dados
		registro();
		break;
		
		case 2:
		consulta();//se o usu�rio escolher consultar dados
		break;
		
		case 3://se o usu�rio escolher deletar dados
		deletar();
		break;
		
		case 4: //Se o usu�rio quiser sair do sistema
		printf("Obrigado por utilizar o sitema!\n");
		return 0;
		break;
		
		default:
		printf("\tEsta op��o n�o est� dispon�vel.\n\n");//se o usu�rio entrar com alguma op��o diferente das dispn�veis
		system("pause");
		break;
			
			
	}
	
	}
	
	printf("\tEsse software foi desenvolvido por Joks Lobo");
}
