/*Algoritmo elaborado para realizar quatro operações matemáticas com 2 números, verificando se será dividido
por 0 no campo de divisão*/

#include <stdio.h>
int main(){
int num1, num2;  

printf("Olá, digite o primeiro valor: \n");   
  scanf("%d", &num1);
printf("Agora, digite o segundo valor: \n");
  scanf("%d", &num2);
    printf("Adição: %d \n", num1+num2);
    printf("Subtração: %d \n", num1-num2);
    printf("Multiplicação: %d \n", num1*num2);
    if(num2!=0){
    printf("Divisão: %d \n", num1/num2);
    }
        else{
        printf("Não é possível dividir por 0 \n");
    }
return 0;
}
