#include <stdio.h>
#include "compra.h"
#include "contaDigitos.h"

int main()
{
  compra();

  int senhaCadastro, operacao, senhaTentativa, tentativas = 0, flagSenha = 0, qtdDigitos;
  double saldoConta = 0, valorDeposito = 0, valorSaque = 0;

  printf("Cadastre uma senha: ");
  scanf("%d", &senhaCadastro);

  do
  {

    qtdDigitos = contaDigitos(senhaCadastro);

    if (qtdDigitos == 4)
    {

      printf("Vc digitou uma senha de 4 digitos.\n");
      printf("Senha cadastrada com sucesso.\n");
    }
    else
    {

      printf("Vc nao digitou uma senha de 4 digitos.\n");
      printf("Digite noavamente. \n");
    }
  } while (qtdDigitos != 4);

  printf("\n Digite 1 para DEPOSITAR\n");
  printf(" Digite 2 para EXTRATO\n");
  printf(" Digite 3 para SACAR\n");
  scanf("%d", &operacao);

  while (operacao != -1)
  {
    flagSenha = 0;
    tentativas = 0;
    if (operacao == 1)
    {
      printf("Digite o valor do deposito: ");
      scanf("%lf", &valorDeposito);
      // saldoConta += valorDeposito;
      saldoConta = saldoConta + valorDeposito;
    }
    else if (operacao == 2)
    {
      do
      {
        printf("Digite a sua senha: ");
        scanf("%d", &senhaTentativa);

        tentativas++;

        if (senhaCadastro == senhaTentativa)
        {
          printf("O saldo eh: %.2lf \n", saldoConta);
        }
        else if ((senhaCadastro != senhaTentativa) && (tentativas == 3))
        {
          printf("Senha invalida, sua conta foi bloqueada.");
          // flagSenha=1;
          // break;
          return 0;
        }
        else
        {
          printf("Senha invalida\n");
        }

      } while (senhaCadastro != senhaTentativa);
    }
    else if (operacao == 3)
    {

      do
      {
        printf("Digite a sua senha: ");
        scanf("%d", &senhaTentativa);

        tentativas++;

        if (senhaCadastro == senhaTentativa)
        {
          printf("Digite o valor a ser sacado: ");
          scanf("%lf", &valorSaque);

          if (valorSaque <= saldoConta)
          {
            saldoConta -= valorSaque;
          }
          else
          {
            printf("Saldo insuficiente");
          }
        }
        else if ((senhaCadastro != senhaTentativa) && (tentativas == 3))
        {
          printf("Senha invalida, sua conta foi bloqueada");
          // flagSenha=1;
          // break;
          return 0;
        }
        else
        {
          printf("Senha invalida\n");
        }

      } while (senhaCadastro != senhaTentativa);
    }
    else
    {
      printf("operacao invalida\n");
    }

    // if (flagSenha != 1){
    printf("\n Qual operacao deseja realizar: ");
    scanf("%d", &operacao);
    //}
    // else {
    //   break;
    //}
  }
}