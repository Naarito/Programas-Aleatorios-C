#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int segundos = time(0);
  srand(segundos);
  int numeroGrande = rand();
  int numeroSecreto = numeroGrande % 100;
  printf("Numero secreto eh: %d",numeroSecreto);
}