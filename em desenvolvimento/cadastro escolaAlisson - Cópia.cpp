#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX_ALUNOS 50//uma constant caso futuramente queira ser alterada
typedef struct {//onde trabalharemos e sera armazenado os dados dos alunos

	char nome[50];//vetor de caacter com 50 posições
	
	float notas[4];//vetor com 4 posições para armazenar as notas
	
	int ativo;//para saber se o aluno esta ativo ou não 
	
} Aluno;

Aluno alunos[MAX_ALUNOS];//vetor utiliza a constante MaX...... para que se no caso queira ser alterar a quantidade de alunos

void menu();//prototico da função menu 

void cadastrar();//prototico função cadastro

void remover();//prototico função remover

void reprovados();//prototico função reprovados

void pesquisa();//prototico função pesquisa

void listar();


int main(){

	//int auxiliar;
	
	//do{
	
	
	menu();//chamando a função menu
	
	//}while(auxiliar != 0);
	
}

void menu(){
	

	
	system("cls");//parsetlocale(LC_ALL, "portuguese");
	
	int auxiliar;
	
	do{
	system("cls");//para fazer uma limpeza no terminal

	printf("\n==========================\n|   CADASTRO DE ALUNOS   |\n==========================\n");
	printf("\n(1) -> Cadastrar Aluno\n(2) -> Remover Aluno\n(3) -> Alunos Reprovados\n(4) -> Pesquisar Aluno\n(5) -> Listar Alunos\n(0) -> Sair\t\t\t\t");
		scanf("%i",&auxiliar);
		getchar();
	switch(auxiliar){
		case 1:
			cadastrar();				
				break;
		case 2: 
			remover();
				break;
		case 4:
			pesquisa();
				break;
		case 5:
			listar();
				break;
	}
	
	getchar();
	
	}while(auxiliar != 0);

}


void cadastrar(){

	

	system("cls");

	//setlocale(LC_ALL, "portuguese");

	char nome[50];

	float notas[4];

	int i, auxiliar;

	do{
		printf("\nNome: ");
			fgets(nome,sizeof(nome),stdin);//utilizamos a função fgets para podermos realizar a leitura do nome utilizo o sizeof para ele calcular o tamanho com base na minha variavel e o stdin seria a entrada pelo terminal
		
	/*	for(i = 0; i < 4;i++){
		
		printf("\n%i Bimestre: ", i + 1);
			scanf("%f",&notas[i]);

}*/
	
	
	printf("\n1 Bimestre: ");
		scanf("%f",&notas[0]);
	
	printf("\n2 Bimestre: ");
		scanf("%f",&notas[1]);
	
	printf("\n3 Bimestre: ");
		scanf("%f",&notas[2]);
	
	printf("\n4 Bimestre: ");
		scanf("%f",&notas[3]);
	
	for(i = 0; i < MAX_ALUNOS; i++){
		
		if(alunos[i].ativo == 0){
		
	
		
			alunos[i].notas[0] = notas [0];
			alunos[i].notas[1] = notas [1];
			alunos[i].notas[2] = notas [2];
			alunos[i].notas[3] = notas [3];
			strcpy(alunos[i].nome, nome);
			alunos[i].ativo = 1;
			break;
			
		}
		
	}
		printf("\n(1) -> Continuar\n\n(0) -> Sair\n");
			scanf("%i",&auxiliar);
			
	}while(auxiliar != 0);


}
void remover(){
	
	int matricula;
	
	listar();
	
	printf("\n\nDigite a Matricula do Aluno a ser Removido: ");
		scanf("%i", &matricula);
	
	--matricula;
	
	alunos[matricula].ativo = 0;
	
	printf("\nAluno Excluido com Sucesso!");
	
	getchar();
}

void reprovados(){
	
	
}

void pesquisa(){
	
	
	
	int i, repetir;
	
	char nome[50];
	
	do{
	
	system("cls");
	
	printf("\nDigite o nome do Aluno: ");
		fgets(nome, sizeof(nome), stdin);
		
		
	for(i = 0; i < MAX_ALUNOS; i++){
		
		if(strstr(alunos[i].nome, nome)!= NULL){
			
				printf("\nMatricula: %i",i + 1);
	printf("\n===============================\n");
	printf("\nNome: %s",alunos[i].nome);
//	printf("\n===============================\n");
	printf("\n===============================\n");
	printf("\n1 Bimestre: %.2f\n",alunos[i].notas[0]);
	printf("\n2 Bimestre: %.2f\n",alunos[i].notas[1]);
	printf("\n3 Bimestre: %.2f\n",alunos[i].notas[2]);
	printf("\n4 Bimestre: %.2f\n",alunos[i].notas[3]);
	printf("\n====================\n");
			
			
			
			
			}
		
		
		
		}
	
		printf("\n\n(1) -> Nova Pesquisa\n\n(0) -> Sair");
			scanf("%i",&repetir);
		getchar();
	}while(repetir != 0);
	
}

void listar(){
	
	system("cls");
	
	//setlocale(LC_ALL, "portuguese");
	
	printf("\n=======================\n|   Lista de Alunos   |\n=======================\n");
	
		int i;
		
	for(i = 0; i < MAX_ALUNOS; i ++){
	//printf("\n==========");

	if (alunos[i].ativo == 1){
	
	printf("\nMatricula: %i",i + 1);
	printf("\n===============================\n");
	printf("\nNome: %s",alunos[i].nome);
//	printf("\n===============================\n");
	printf("\n===============================\n");
	printf("\n1 Bimestre: %.2f\n",alunos[i].notas[0]);
	printf("\n2 Bimestre: %.2f\n",alunos[i].notas[1]);
	printf("\n3 Bimestre: %.2f\n",alunos[i].notas[2]);
	printf("\n4 Bimestre: %.2f\n",alunos[i].notas[3]);
	printf("\n====================\n");
	
		}


	}



}








