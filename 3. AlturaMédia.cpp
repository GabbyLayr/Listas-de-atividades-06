//Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de at� 10 pessoas. Fazer 
//um programa que calcule e escreva: a maior e a menor altura do grupo; a m�dia da altura das mulheres; 
//o n�mero de homens. Usar os tr�s comandos de repeti��o na solu��o do problema.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int i = 0, altura = 0, maior = 0, menor = 0, feminino = 0, masculino = 0, MFeminino = 0, inicio = 1;
    char sexo;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    while (inicio <= 10){
        printf("%d. Digite a altura: ", ++i);
        scanf("%d", &altura);
        fflush(stdin);
        if (altura > maior){
          maior = altura;
        }else{(altura < menor);
          menor = altura;}
          
       printf("\nDiga o sexo sendo F. para feminino e M. para masculino:\n >");
	   scanf("%c", &sexo);
	   fflush(stdin); 
       sexo = toupper(sexo); 
	   if(sexo != 'F' && sexo != 'M'){ 
	     printf("Invalido!\n");}
       if (sexo == 'F' || sexo == 'f'){
         feminino++;
           MFeminino += altura;
        }else if (sexo == 'M' || sexo == 'm'){
          masculino++;}
        inicio++;
    }
//Sa�da:
    printf("\nMaior altura do grupo: %d", maior);
    printf("\nMenor altura do grupo: %d\n", menor);
    printf("\nM�dia Feminina: %d", MFeminino / feminino);
    printf("\nExistem %d homens no grupo!", masculino);

return 0;	
}
