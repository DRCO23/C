#include <stdio.h>
#include <stdlib.h>
int main(){
        //Variáveis locais, declaradas dentro da função. "main()"
    int num1 = 20;
    float num2 = 14.7;
    char caractere = 'D';

    printf("%d\n", num1);
    printf("%.1f\n", num2);         //%.1f indica para indicar quantas casas de precisão, dessa forma indicará exatamente "14.7"
    printf("%c\n", caractere);

    return 0;
}
