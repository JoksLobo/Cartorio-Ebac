#include <stdio.h> //Biblioteca de Comunica��o com o Usu�rio
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o

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
	printf("\t3 - Deletar registro\n\n");//fim do menu
	printf("Op��o: ");
	
	scanf("%d", &opcao);//armazenando a escolha do usuario
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		printf("\tVoc� escolheu registrar aluno!\n\n");
		system("pause");
		break;
		
		case 2:
		printf("\tVoc� escolheu consultar registros!\n\n");
		system("pause");
		break;
		
		case 3:
		printf("\tVoc� escolheu deletar registros!\n\n");
		system("pause");
		break;
		
		default:
		printf("\tEsta op��o n�o est� dispon�vel.\n\n");
		system("pause");
		break;
			
			
	}
	
	}
	
	printf("\tEsse software foi desenvolvido por Joks Lobo");
}
