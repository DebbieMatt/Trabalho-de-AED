#include <stdio.h>



int compra() {
  int item, quant;
  float var, preco;
  char opcao;
  // teste 1
  do{
  printf("Por favor digite o item de nossa nosso supermercado, que deseja "
         "levar : ");
  scanf("%d", &item);

  printf("Digite a quantidade: ");
  scanf("%d", &quant);

  printf(
      "Voce tem o cartão da loja. Digite: S - sim ou N - nao: \n "); // o codigo
                                                                     // esta
                                                                     // pulando
                                                                     // o scanf
                                                                     // em char.
  scanf("%c", &opcao);
  
} while (item != 0);

  switch (item) {

  case 01:
    if (quant >= 3 || opcao == 's') {
      preco = 1.95;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) sabonete(s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 2.10;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) sabonete(s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
    }

    break;

  case 02:
    if (quant >= 2 || opcao == 's') {
      preco = 8.20;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 8.39;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 03:
    if (quant >= 4 || opcao == 's') {
      preco = 3.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 4.21;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 04:
    if (quant >= 3 || opcao == 's') {
      preco = 4.80;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Óleo de soja (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 4.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Óleo de soja(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 05:
    if (quant >= 2 || opcao == 's') {
      preco = 19.85;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 21;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 06:
    if (quant >= 5 || opcao == 's') {
      preco = 5.55;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 5.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 07:
    if (quant >= 7 || opcao == 's') {
      preco = 1.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    } else {
      preco = 2.15;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  default:
    printf("código invalido");
  }
}

int contaDigitos (int numero) { // add uma nova função e um do...while
    int contador = 0;
    
    while (numero != 0){
        numero /= 10;
        contador++;
        
    }
    
    return contador;
}

int main ()
{
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
                    //flagSenha=1;
                    //break;
                    return 0;
                }
                else
                {
                    printf("Senha invalida\n");
                }

            }
            while (senhaCadastro != senhaTentativa);

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
                else if ((senhaCadastro != senhaTentativa)&&(tentativas==3))
                {
                    printf("Senha invalida, sua conta foi bloqueada");
                    //flagSenha=1;
                    //break;
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

        // if (flagSenha != 1){
        printf("\n Qual operacao deseja realizar: ");
        scanf("%d", &operacao);
        //}
        // else {
        //   break;
        //}

    }

}