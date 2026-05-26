/*
O programa deve receber 4 notas, realizar o cálculo
 da média e verificar se:
    - A nota média for maior ou igual a 7, o aluno
    estará Aprovado; caso contrário estará Reprovado

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    // Comando System que chama uma execução do sistema operacional
    // que, neste caso será o comando clear
    system("clear");



    printf("Digite a primeira nota e tecle Enter\n");
    scanf("%f",&nota1);

    printf("Digite a segunda nota e tecle Enter\n");
    scanf("%f",&nota2);

    printf("Digite a terceira nota e tecle Enter\n");
    scanf("%f",&nota3);
   
    printf("Digite a quarta nota e tecle Enter\n");
    scanf("%f",&nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if( media >= 7){
        printf("A média do aluno foi %.2f e está Aprovado\n",media);
    }
    else{
        printf("A média do aluno foi %.2f e está Reprovado\n",media);
    }

    printf("\n###########################################################\n");
    printf("Endereço de memória da variável nota1 %p \n", &nota1);
    printf("Endereço de memória da variável nota2 %p \n", &nota2);
    printf("Endereço de memória da variável nota3 %p \n", &nota3);
    printf("Endereço de memória da variável nota4 %p \n", &nota4);
    printf("Endereço de memória da variável media %p \n", &media);
    return 0;
}