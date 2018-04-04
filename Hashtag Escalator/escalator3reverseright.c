#include <stdio.h>

int main()
{
    int numero;
    int flagespacos= 0;
    int espacosqtd;

    printf("Digite um Numero: ");
    scanf("%d", &numero);
    printf("\n");

    for (int i = numero; i > 0; i--)
    {
        espacosqtd = numero - i;

        if (flagespacos)
        {
            for (int k = 1; k <= espacosqtd; k++)
            {
                printf(" ");
            }
        }

        for (int j = i; j > 0; j--)
        {
            printf("#");
        }
        printf("\n");
        flagespacos = 1;
    }
}