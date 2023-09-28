#include <stdio.h>
#include "compra.h"
#include "contaDigitos.h"

int main () { // CADASTRO DE SENHA, PAGAMENTO E EXTRATO NO CREDIARIO
    
    compra();

    int operacao;
    double saldoConta=0, valorDeposito=0, valorSaque=0;

    printf("\n Qual operacao deseja realizar: ");
    scanf("%d", &operacao);

    printf("\n Digite 1 para DEPOSITAR\n");
    printf(" Digite 2 para EXTRATO\n");
    printf(" Digite 3 para SACAR\n");
    scanf("%d", &operacao);

    while (operacao != -1)
    {
        if (operacao == 1)
        {
            printf("Digite o valor do deposito: ");
            scanf("%lf", &valorDeposito);
            
            saldoConta = saldoConta + valorDeposito;
        }
        else if (operacao == 2)
        {
                    printf("O saldo eh: %.2lf \n", saldoConta);

        }
        else if (operacao == 3)
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
        else
        {
            printf("operacao invalida\n");
        }

        printf("\n Qual operacao deseja realizar: ");
        scanf("%d", &operacao);
        
    }

}