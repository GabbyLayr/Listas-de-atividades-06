//Escreva um programa que transforme o computador em uma urna eletr�nica para elei��o do melhor 
//jogador de futebol de todos os tempos. O n�mero 25 � do candidato Pel� e o 33 do candidato Maradona. Cada voto ser� efetivado pelo n�mero do candidato, permitindo-se ainda o voto 0 (em branco) e 
//qualquer outro voto diferente dos especificados ser� considerado nulo. O eleitor dever� sempre ser 
//consultado quanto a confirma��o do voto. Ao final da elei��o dever� ser apresentado um relat�rio 
//contendo:
//� Quantidade de votos de cada candidato;
//� Quantidade de votos em branco e nulos;
//� Nome do candidato vencedor (prever possibilidade de empate)

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int i = 0, voto, pele = 0, maradona = 0, branco = 0, brancoNulo = 0;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Melhor jogador:");
do{
	printf("\n%d. Para realiza seu voto selecione uma op��o:\n", ++i);
	printf("\n25. Pel�\n33. Maradona\n 0. Branco");
	printf("\nOp��o: ");
	scanf("%d", &voto);
	if(voto == 25){
	  pele++;
	    }else if (voto == 33){
		   maradona++;
	         }else{ 
				   brancoNulo++;
				 }
}while(voto != 0);
//Sa�da:
	printf("Resultados da vota��o:\n");
	printf("\nQuantidade de votos de cada candidato:\n");
	printf("> Pel�: %d votos", pele);
	printf("\n> Maradona: %d votos\n", maradona);
	printf("\nQuantidade de votos em branco e nulos: %d\n", brancoNulo);
	printf("\nMelhor jogador do mundo de acordo com nossa vota��o:\n");
	if(pele > maradona){
	  printf("> PEL�");
	    }else if(maradona > pele){
		   printf("> MARADONA");
	         }else{ (pele == maradona);
	            printf("> EMPATE");}	
return 0;	
}
