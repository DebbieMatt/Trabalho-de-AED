#include <stdio.h>

int compra()
{
    int item, quant;
    float var, preco;
    char opcao;

    do
    {
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

    switch (item)
    {

    case 01:
        if (quant >= 3 || opcao == 's')
        {
            preco = 1.95;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) sabonete(s). \n", quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
            preco = 2.10;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) sabonete(s). \n", quant);
            printf("Lhe custara R$ %.2f \n", var);
        }

        break;

    case 02:
        if (quant >= 2 || opcao == 's')
        {
            preco = 8.20;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
            preco = 8.39;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        break;

    case 03:
        if (quant >= 4 || opcao == 's')
        {
            preco = 3.99;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
                   "espaguete(s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
            preco = 4.21;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
                   "espaguete(s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        break;

    case 04:
        if (quant >= 3 || opcao == 's')
        {
            preco = 4.80;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Óleo de soja (s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
            preco = 4.99;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Óleo de soja(s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        break;

    case 05:
        if (quant >= 2 || opcao == 's')
        {
            preco = 19.85;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
            preco = 21;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        break;

    case 06:
        if (quant >= 5 || opcao == 's')
        {
            preco = 5.55;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
            preco = 5.99;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        break;

    case 07:
        if (quant >= 7 || opcao == 's')
        {
            preco = 1.99;
            var = preco * quant;
            printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
                   quant);
            printf("Lhe custara R$ %.2f \n", var);
        }
        else
        {
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