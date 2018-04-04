#include <stdio.h>

int potencia(int a, int b) {
  int resultado = 1;
  for(int i = 0; i < b; i++) {
    resultado = resultado * a;
  }

  return resultado;

}

int main() {
  int op, a, b;
  scanf("%d", &op);
  scanf("%d", &a);
  scanf("%d", &b);

  if(op==1) { 
    printf("%d", a + b);
  }
  else if(op==2) { 
    printf("%d", a - b);
  }
  else if(op==3) { 
    printf("%d", a / b);
  }
  else if(op==4) { 
    printf("%d", a * b);
  }
  else if(op==5) { 
    int resultado = potencia(a,b);
    printf("%d", resultado);
  }
}