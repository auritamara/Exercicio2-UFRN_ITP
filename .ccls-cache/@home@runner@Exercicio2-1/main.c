#include <stdio.h>

int main(void) {

  int valorDigitado;
  scanf ("%i", &valorDigitado);
  int anos = 0;
  int meses = 0;
  int dias = 0;
  if (valorDigitado > 364) {    
    for (int i = 0; valorDigitado > 364; i++){
      anos++;
      valorDigitado = valorDigitado - 365;      
    }
  }
  if (valorDigitado > 29) {
    for (int i = 0; valorDigitado > 29; i++){
      meses++;
      valorDigitado = valorDigitado - 30;      
    }
  }
  dias = valorDigitado;
  printf("%i ano(s)\n", anos);
  printf("%i mes(es)\n", meses);
  printf("%i dia(s)\n", dias);
  return 0;
}