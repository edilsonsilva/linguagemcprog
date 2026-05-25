#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;


    printf("Digite um número inteiro e tecle ENTER\n");
    scanf("%d", &num1);

    printf("Digite outro número inteiro e tecle ENTER\n");
    scanf("%d", &num2);

    // Vamos realizar a soma entre as duas variáveis(num1 e num2)
    // e alocar o resultado na variável soma
    soma = num1 + num2;
    subtrair = num1 - num2;
    multiplicar = num1 * num2;
    dividir = num1 / num2;

    printf("A soma dos números %d e %d resultou em %d\n",num1,num2,soma);
    printf("A subtração dos números %d e %d resultou em %d\n",num1,num2,subtrair);
    printf("A multiplicação dos números %d e %d resultou em %d\n",num1,num2,multiplicar);
    printf("A divisão dos números %d e %d resultou em %d\n",num1,num2,dividir);
    

    return 0;

}