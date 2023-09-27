/*Trabalhando com Variáveis em C*/
#include<stdio.h>
int main(){
 char nomeUsuario[50], emailUsuario[50];
 int idadeUsuario, confirmarSaldo;
 float saldo;

    printf("Insira seu nome: \n");
    scanf("%49s", &nomeUsuario);

    printf("Insira seu email: \n ");
    scanf("%49s", &emailUsuario);

    printf("Insira sua idade: \n");
    scanf("%d", &idadeUsuario);

    printf("Insira o saldo: \n");
    scanf("%f", &saldo);

    printf("Seu nome é: %s \n",nomeUsuario);
    printf("Seu email é: %s \n",emailUsuario);
    printf("Sua idade é: %d anos \n ",idadeUsuario);
    printf("O saldo à ser recarregado é: R$ %.2f \n",saldo);

    printf("Você deseja confirmar a recarga? Digite 1 para SIM e 2 para NÃO: \n");
    scanf("%d", &confirmarSaldo);

    if(confirmarSaldo==1){
        printf("Seu saldo foi recarregado com sucesso!");
    }
    else{
    printf("Operação cancelada!");
    }
    return 0;
}
