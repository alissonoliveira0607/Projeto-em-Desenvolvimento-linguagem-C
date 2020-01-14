#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define SIZE 200

		char nome [SIZE] [50];
	
		char email [SIZE] [50];
	
		int cpf [SIZE];
	
		int op;

	void cadastro ();
	
	void pesquisa ();
	
	int main (void){
	
	setlocale (LC_ALL,"portuguese");
	
		cadastro ();
		
		pesquisa ();
	
}
	void cadastro (){
		
		static int linha;
		
		do {
			printf("\n\nDigite o nome: ");
				scanf("%s",&nome[linha]);
			
			printf("\n\nDigite o E-mail: ");
				scanf("%s",&email[linha]);
			
			printf("\n\nDigite o CPF: ");
				scanf("%i",&cpf[linha]);
			
			printf("\n\n[1] <- \tContinuar\n\n[2] <- \tSair\t");
			scanf("%i",&op);
	
			linha ++;
		}while(op == 1);
			
	}
	
	void pesquisa (){
	
	int pescpf;
	
	int i;
	
	char pesemail[50];	
		do{
			printf("\n\n[1] <- Pesquisa por CPF:\t\n\n[2] <- Pesquisa por E-Mail:\t");
				scanf("%i",&op);
				
			switch(op){
				
				case 1: 
					printf("\n\nDigite o CPF: ");
					scanf("%i",&pescpf);
						for(i = 0; i < SIZE; i++){
						
							if(cpf[i] == pescpf){
								printf("\n\nNome: \t%s\n\nE-Mail: \t%s\n\nCPF: \t%i",nome[i], email[i], cpf[i]);	
						
							}
						}
						
				break;
				
				case 2:
					printf("\n\nDigite o E-Mail: ");
					scanf("%s",&pesemail);
							for(i = 0; i < SIZE; i++){
								if(strcmp(email[i], pesemail)){//a função strcomp vai comparar se minha variavel email[i] e igual ao que esta na minha variavel email
									printf("\n\n\nNome: \t%s\n\n\nE-Mail: \t%s\n\n\nCPF: \t%i",nome[i], email[i], cpf[i]);
					}
			}
				break;
					
				default:
				
					printf("\n\nOpcao Invalida");		
				
					break;	
			
			}
		
		printf("\n\nDigite [1] <- Para Continuar: ");
		scanf("%i",&op);
	}while(op == 1);
		
		

		
		
	}


