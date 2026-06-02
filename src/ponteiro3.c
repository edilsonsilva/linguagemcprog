#include <stdio.h>
#include <stdlib.h>

int main(){
    //vamos criar uma estrutura de coleção de dados
    //chamada de array(arranjo)
    int idade[6] = {18,25,17,16,10,21};
    int *pidade = idade;

    printf("Primeiro elemento é %d\n",idade[0]);
    printf("Primeiro elemento é %d\n",*pidade);
    printf("O endereço do primeiro elemento é %p\n",pidade);

    pidade++;

    printf("Segundo elemento é %d\n",idade[1]);
    printf("Segundo elemento é %d\n",*pidade);
    printf("O endereço do segundo elemento é %p\n",pidade);

    pidade++;

    printf("Terceiro elemento é %d\n",idade[2]);
    printf("Terceiro elemento é %d\n",*pidade);
    printf("O endereço do Terceiro elemento é %p\n",pidade);

    return 0;

}


   