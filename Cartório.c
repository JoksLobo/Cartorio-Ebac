#include <stdio.h> //Biblioteca de Comunicação com o Usuário
#include <stdlib.h> //Biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região

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
	printf("\t3 - Deletar registro\n\n");//fim do menu
	printf("Opção: ");
	
	scanf("%d", &opcao);//armazenando a escolha do usuario
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		printf("\tVocê escolheu registrar aluno!\n\n");
		system("pause");
		break;
		
		case 2:
		printf("\tVocê escolheu consultar registros!\n\n");
		system("pause");
		break;
		
		case 3:
		printf("\tVocê escolheu deletar registros!\n\n");
		system("pause");
		break;
		
		default:
		printf("\tEsta opção não está disponível.\n\n");
		system("pause");
		break;
			
			
	}
	
	}
	
	printf("\tEsse software foi desenvolvido por Joks Lobo");
}
