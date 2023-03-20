#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, result;
    char opc;

    printf("Digite a função que você deseja: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case '+'/* constant-expression */:
        n1 + n2;
        break;
    
    case '-':
        n1 - n2;
        break;
    
    case '*':
        n1 * n2;
        break;
    case '/':
        n1 / n2;
        break;
    }
    return 0;
}