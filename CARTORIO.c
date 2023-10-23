#include <stdio.h> //Biblioteca de Comunicação com o Usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro()//Função responsável por cadastrar os usuários no sistema
{
	//Inicio de criação de varíaveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de varíaveis
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informação do usuário
	scanf("%s,", cpf);//%s refere-se às strings
	
	strcpy(arquivo, cpf);//responsável por copiar os valores das strings
	
	FILE *file;//cria o arquivo
	file = fopen(arquivo, "w");//cria o arquivo
	fprintf(file,cpf); //salvo o valor da variavel
	fclose(file); //fecho o arquivo
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, ",");//insere vírgula entre as informações
	fclose(file);//fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//coleta a informação "nome" do usuário
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, nome);//salva o valor da variável
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, ",");//insere vírgula entre as informações
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//coleta a informação "sobrenome" do usuário
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, sobrenome);//salva o valor da varíavel
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, ",");// insere vírgula entre as informações
	fclose(file);//fecha p arquivo
	
	printf("Digite cargo a ser cadastrado: ");//coleta a informação "cargo" do usuário
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");//atualiza o arquivo
	fprintf(file, cargo);//salava o valor da varíavel
	fclose(file);//fecha o arquivo
	
	system("pause");
	
	
}
int consulta()
{
	setlocale(LC_ALL, "portuguese");//definindo a linguagem
	char cpf[40];
	char conteudo[200];
	
	printf("\tDigite o CPF a ser consultado: \n\n");//coleta o CPF do usuário a ser consultado
	scanf("%s",cpf);
	
	FILE *file;//abre o arquivo
	file = fopen(cpf,"r");//abre e lê o arquivo "CPF"
	
	if(file == NULL)//se o CPF do usuário informado não estiver cadastrado no banco de dados
	{
		printf("\tNão foi possível abrir o arquivo, não localizado!.\n\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)//se o CPF do usuário informado estiver cadastrado no banco de dados
	{
		printf("\tEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	fclose(file);
	system("pause");
}

int deletar()
{
	char cpf[40];
	printf("\tDigite o CPF do usuário a ser deletado: ");//coleta o CPF do usuário a ser deletado do banco de dados
	scanf("%s", cpf);
	
	remove(cpf);//remove o arquivo do usuário do banco de dados
	
	FILE *file;//abre arquivo
	file = fopen(cpf, "r");//abre e lê (r) o arquivo
	
	if(file == NULL)//Se o cpf do usuário informado não constar no banco de dados
	{
		printf("\tO usuário não se encontra no sistema!\n");
		system("pause");
	}
}
int main (){
	
	int opcao=0;//Definindo varíaveis
	int laco=1;
	for(laco=1; laco=10;){
		
		system("cls");
	
	
	setlocale(LC_ALL, "portuguese");//Definindo a linguagem
	
	printf("\t### Cartório da EBAC ###\n\n");//inicio do menu
	printf("\tEscolha uma das opções abaixo:\n\n");
	printf("\t1 - Registrar aluno\n");
	printf("\t2 - Consultar registros\n");
	printf("\t3 - Deletar registro\n");
	printf("\t4 - Sair do sistema\n");
	printf("Opção: ");//fim do menu
	
	scanf("%d", &opcao);//armazenando a escolha do usuario
	
	system("cls");//responsável por limpar a tela
	
	switch(opcao)//Inicio da seleção do menu
	{
		case 1://se o usuário escolher registrar dados
		registro();
		break;
		
		case 2:
		consulta();//se o usuário escolher consultar dados
		break;
		
		case 3://se o usuário escolher deletar dados
		deletar();
		break;
		
		case 4: //Se o usuário quiser sair do sistema
		printf("Obrigado por utilizar o sitema!\n");
		return 0;
		break;
		
		default:
		printf("\tEsta opção não está disponível.\n\n");//se o usuário entrar com alguma opção diferente das dispníveis
		system("pause");
		break;
			
			
	}
	
	}
	
	printf("\tEsse software foi desenvolvido por Joks Lobo");
}
