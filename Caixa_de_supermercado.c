#include <stdio.h>
#include "compra.h"
#include "contaDigitos.h"

int main () { // CADASTRO DE SENHA, PAGAMENTO E EXTRATO NO CREDIARIO
    
    compra();
    
    int senhaCadastro, operacao, senhaTentativa, tentativas=0, flagSenha=0, qtdDigitos;
    double saldoConta=0, valorDeposito=0, valorSaque=0;

    printf("Cadastre uma senha: ");
    scanf("%d", &senhaCadastro);
    
    do
            {
       
                qtdDigitos = contaDigitos (senhaCadastro);
       
                if (qtdDigitos == 4){ 
                    
                printf("Vc digitou uma senha de 4 digitos.\n");
                printf("Senha cadastrada com sucesso.\n");
                }
                else { 
                
                printf("Vc nao digitou uma senha de 4 digitos.\n");
                printf("Digite noavamente. \n");
                }
                } while (qtdDigitos != 4);

    printf("\n Digite 1 para PAGAR O CREDIARIO\n");
    printf(" Digite 2 para VERIFICAR O EXTRATO DO CREDIARIO\n");
    scanf("%d", &operacao);

    while (operacao != -1)
    {
        flagSenha = 0;
        tentativas = 0;
        if (operacao == 1)
        {
            printf("Digite o valor do deposito: ");
            scanf("%lf", &valorDeposito);
            
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

                    return 0;
                }
                else
                {
                    printf("Senha invalida\n");
                }

            }
            while (senhaCadastro != senhaTentativa);

        }
        
        else
        {
            printf("operacao invalida\n");
        }

        
        printf("\n Qual operacao deseja realizar: ");
        scanf("%d", &operacao);
      
    }

}