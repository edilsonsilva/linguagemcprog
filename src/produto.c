#include <stdio.h>
int main(){
    //Vamos usas as variáveis com o tipo de dado float, pois, 
    //este programa recebe valores com casas decimais
    float preco;
    float taxa;
    float parcelas;
    float resultado;
    float resultadoParcelas;
    /*
    Camel Case ( nomeCompletoCliente)
    Snake Case ( nome_completo_cliente)
    Simple Case (nomecompletocliente)
    */


    printf("Digite o preço do produto e tecle Enter\n");
    scanf("%f",&preco);

    printf("Digite a taxa de acréscimo sem o simbolo de porcentagem e tecle Enter\n");
    scanf("%f",&taxa);

    printf("Digite o número de parcelas e tecle Enter\n");
    scanf("%f",&parcelas);

    resultado = preco * (taxa / 100) + preco;
    resultadoParcelas = resultado / parcelas;

    printf("O valor final do produto é R$ %.2f\n",resultado);
    printf("O valor da parcela é R$ %.2f\n",resultadoParcelas);

    return 0;

}