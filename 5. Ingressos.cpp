//Uma companhia de teatro planeja dar uma s�rie de espet�culos. A dire��o calcula que a R$15,00 o 
//ingresso, ser�o vendidos 120 ingressos, e as despesas montar�o R$600,00. A uma diminui��o de R$3,00 
//nos ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um programa que escreva 
//uma tabela de valores do lucro esperado em fun��o do pre�o do ingresso, fazendo-o variar de R$15,00 a 
//R$3,00 de 3 em 3 reais. Escreva, ainda, o lucro m�ximo esperado, o pre�o e o n�mero de ingressos 
//correspondentes.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int vendidos = 120;
    float preco, despezas = 600, lucro;
    setlocale(LC_ALL, "portuguese");
//Sa�da: 
    printf("Tabela de lucros:\n");
    printf("|  Vendidos  ||  Pre�o  ||  Despezas  ||  Lucro  |\n");

	for(preco = 15; preco> 0; preco = preco - 3){
		lucro = (preco * vendidos) - despezas;
		printf("|     %d    ||  %.2lf  ||  %.2lf  ||  %.2lf  |\n", vendidos, preco, despezas, lucro);
		vendidos = vendidos + 26;}
	
return 0;	
}
