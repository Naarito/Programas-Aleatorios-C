#include <stdio.h>

int main() {
  int numero;
  printf("Digite um numero para saber se eh par ou impar: ");
  scanf("%d", &numero);
  printf("\n\n");

  int div = numero%2;
	
	if(!div){
		printf("O numero eh Par!");
    printf("\n\n");
	}
	else{
		printf("O numero eh Impar!");
    printf("\n\n");
	}
}