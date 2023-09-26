#include <stdio.h>

int contaDigitos(int numero)
{ // add uma nova função e um do...while
  int contador = 0;

  while (numero != 0)
  {
    numero /= 10;
    contador++;
  }

  return contador;
}