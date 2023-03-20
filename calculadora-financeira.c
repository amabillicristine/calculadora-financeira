#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, result, opc;

    printf("digite o primeiro numero para fazer o calculo: \n");
    scanf("%d", &n1);
    printf("digite o segundo numero para fazer o calculo: \n");
    scanf("%d", &n2);
    printf("Digite a função que você deseja: \n");
    printf("1- Adicao.\n");
    printf("2- Subtracao.\n");
    printf("3- Multiplicacao.\n");
    printf("4- Divisao.\n");
    scanf(" %d", &opc);

    switch (opc)
    {
    case 1:
        result = n1 + n2;
        break;
    
    case 2:
        result = n1 - n2;
        break;
    
    case 3:
        result = n1 * n2;
        break;
    
    case 4:
       result = n1 / n2;
        break;
    
    default:
        printf("Opcao invalida!\n");
    }

    if(opc <= 4)
        printf("O resultado é: %d", result);
    return 0;
}