//Elabore um programa em C que solicite um valor ao usu�rio e imprima todos os n�meros pares do 
//n�mero fornecido at� 2000, em uma janela de execu��o. Caso o valor informado seja maior que 2000, 
//apresente no meio de uma tela limpa, somente o valor informado com uma mensagem dizendo que o 
//limite de c�lculo foi excedido.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int numero, contador = 0, i = 0;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    do{
		printf("Digite um n�mero:");
		scanf("%d", &numero);
		if(numero >= 2001){
		  printf("Inv�lido! Tente novamente:\n", numero);}
	}while(numero>=2000);
	
	printf("Esses s�o os n�mero pares entre 2 3 2000:\n");
	if(numero % 2 != 0){
		printf("%d. %d\n", ++i, numero);
	     for(contador = numero; contador < 2000; contador++){
			contador++;
			printf("%d. %d\n", ++i, contador);}
	}else if(numero % 2 == 0){
	  printf("%d. %d\n", ++i, numero);
		for(contador = numero; contador < 2000; contador++){
		  contador++;
			printf("%d. %d\n", ++i, contador + 1);}
	}
	
return 0;	
}
