#include <stdio.h>

int contaDigitos(int numero) { // Função responsavel pela checagem da senha.
  int contador = 0;

  while (numero != 0)
  {
    numero /= 10;
    contador++;
  }

  return contador;
}