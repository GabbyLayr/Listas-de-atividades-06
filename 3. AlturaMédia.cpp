//Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de até 10 pessoas. Fazer 
//um programa que calcule e escreva: a maior e a menor altura do grupo; a média da altura das mulheres; 
//o número de homens. Usar os três comandos de repetição na solução do problema.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
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
//Saída:
    printf("\nMaior altura do grupo: %d", maior);
    printf("\nMenor altura do grupo: %d\n", menor);
    printf("\nMédia Feminina: %d", MFeminino / feminino);
    printf("\nExistem %d homens no grupo!", masculino);

return 0;	
}
