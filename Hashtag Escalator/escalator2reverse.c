#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um Numero: ");
    scanf("%d", &numero);
    printf("\n");

    for (int i = numero; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
    }
}