#include <stdio.h>
#include <stdlib.h>

int main(){
int numero; //variavel

printf("Digite um número: \n"); //O "\n" é para quebrar a linha e o printf é responsável por printar a frase na tela
scanf("%d",&numero);

getchar(); //limpar o "buffer" onde é feito o armazenamento temporario dos dados em transição entre dispositivos
printf("O número digitado foi: %d", numero);
return 0;

}
