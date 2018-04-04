#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um Numero: ");
    scanf("%d", &numero);
    printf("\n");

    for (int i = 1; i <= numero; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}