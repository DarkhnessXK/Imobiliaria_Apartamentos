#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i = 0;
int soma = 0;
int controle = 0;
struct condominio{
		char nome[20];
		int numap, moradores,area;
		float valor;
			
};
typedef struct condominio apartamento;
apartamento  vetapartamento[40];

void cadastro(){
	
	printf("\ndigite os dados do apartamento\n");
	printf("\n-------------------------------------------------------------\n");
	printf("\napartamento: %i\n",controle);
	printf("\ndigite o nome do responsavel\n");
	scanf("%s",&vetapartamento[controle].nome);
	printf("\ndigite o numero do apartamento\n");
	scanf("%i",&vetapartamento[controle].numap);
	printf("\ndigite quantos moradores residem\n");
	scanf("%i",&vetapartamento[controle].moradores);
	printf("\ndigite a area do apartamento\n");
	scanf("%i",&vetapartamento[controle].area);
	
	

	
		
}


void area(){
	if (soma != 0){
		soma = 0;
	}
	for(i=0;i<40;i++){
		
		if(vetapartamento[i].area != 0){
		
		soma = soma + vetapartamento[i].area;
		
		}
		
	}
	
	
}

void preco_area(){
	float preco_area, despesas = 50050;
	area();
	preco_area = despesas/soma;
	printf("\npreco do metro quadrado por apartamento: %f\n",preco_area);
	for(i=0;i<40;i++){
		
		if(vetapartamento[i].area != 0){
		
	preco_area *= vetapartamento[i].area; 
	vetapartamento[i].valor = preco_area ;
	printf("\napartamento: %i\n",i);
	printf("\npreco: %f\n",preco_area);
	printf("\n--------------------------------------------------\n");
}
}
}

void moradores_maior(){
	int maior=1;
		for(i=0;i<40;i++){
			if(vetapartamento[i].moradores >= maior){
				maior == vetapartamento[i].moradores;
			}
			printf("\nteste  %i\n",maior);
			printf("informacoes do(s) apartamento(s) com maior numero de moradores: ");
		for(i=0;i<40;i++){
			if(maior == vetapartamento[i].moradores){
				printf("\nResponsavel do apartamento: %s\n",vetapartamento[i].nome);
				printf("\nNumero do apartamento: %i\n",vetapartamento[i].numap);
				printf("\nQuantidade de moradores: %i\n",vetapartamento[i].moradores);
				printf("\nArea: %i metros quadrados\n",vetapartamento[i].area);
				printf("\nValor: %f\n",vetapartamento[i].valor);
			}
			
			
		}
		
}	
}

int main(){
int op;
printf("\nDigite a opcao Desejada: \n");
printf("\n-------------------------------------------------------------\n");
printf("\n1 -  Cadastrar apartamento\n");
printf("\n2 - Calcular area total do condominio\n");
printf("\n3 - Calcular preco total por metro quadrado\n");
printf("\n4 - Lista dos Apartamentos com maior numero de moradores \n");
printf("\n5 - Sair\n");
printf("\n-------------------------------------------------------------\n");
scanf("%i",&op);
	
	switch(op){
		
		case 1:
			cadastro();
			controle++;
			break;
			
		case 2:
			area();
			printf("\nO area total do condominio:  \n");
			printf("\n%i metros quadrados\n",soma);
			break;
			
		case 3:
			preco_area();
			break;
			
		case 4:
			moradores_maior();
			break;
			
		case 5:
			return 0;
			break;
			
			
		default:
			printf("\nopcao invalida\n");
			break;
		
	}
	
	
	
	getch();
	system("cls");
	main();
	return 0;
}
