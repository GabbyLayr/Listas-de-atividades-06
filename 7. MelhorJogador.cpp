//Escreva um programa que transforme o computador em uma urna eletrônica para eleição do melhor 
//jogador de futebol de todos os tempos. O número 25 é do candidato Pelé e o 33 do candidato Maradona. Cada voto será efetivado pelo número do candidato, permitindo-se ainda o voto 0 (em branco) e 
//qualquer outro voto diferente dos especificados será considerado nulo. O eleitor deverá sempre ser 
//consultado quanto a confirmação do voto. Ao final da eleição deverá ser apresentado um relatório 
//contendo:
//• Quantidade de votos de cada candidato;
//• Quantidade de votos em branco e nulos;
//• Nome do candidato vencedor (prever possibilidade de empate)

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int i = 0, voto, pele = 0, maradona = 0, branco = 0, brancoNulo = 0;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Melhor jogador:");
do{
	printf("\n%d. Para realiza seu voto selecione uma opção:\n", ++i);
	printf("\n25. Pelé\n33. Maradona\n 0. Branco");
	printf("\nOpção: ");
	scanf("%d", &voto);
	if(voto == 25){
	  pele++;
	    }else if (voto == 33){
		   maradona++;
	         }else{ 
				   brancoNulo++;
				 }
}while(voto != 0);
//Saída:
	printf("Resultados da votação:\n");
	printf("\nQuantidade de votos de cada candidato:\n");
	printf("> Pelé: %d votos", pele);
	printf("\n> Maradona: %d votos\n", maradona);
	printf("\nQuantidade de votos em branco e nulos: %d\n", brancoNulo);
	printf("\nMelhor jogador do mundo de acordo com nossa votação:\n");
	if(pele > maradona){
	  printf("> PELÉ");
	    }else if(maradona > pele){
		   printf("> MARADONA");
	         }else{ (pele == maradona);
	            printf("> EMPATE");}	
return 0;	
}
