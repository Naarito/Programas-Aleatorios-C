#include <stdio.h>

int main()
{
    int numero;
    int flagespacos = 0;
    int flaginferior = 0;
    int espaco;
    int hashtaginferiorqtd;

    printf("Digite um Numero: ");
    scanf("%d", &numero);
    printf("\n");

    for (int i = numero; i > 0; i--)
    {
        for (int j = numero; j > 0; j--)
        {
            espaco = j - i;

            if (!espaco)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}