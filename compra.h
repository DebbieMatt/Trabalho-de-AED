#include <stdio.h>

int compra() {  // contabiliza a quantidade de produtos passados e quais.
  int item, quant;
  float var, preco, total;
  
  do{
  printf("Por favor digite o item de nossa nosso supermercado, que deseja "
         "levar : ");
  scanf("%d", &item);

  printf("Digite a quantidade: ");
  scanf("%d", &quant);
  
} while (item != 0);

  switch (item) {

  case 01:
    if (quant >= 3) {
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
    if (quant >= 3) {
      preco = 8.20;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      preco = 9.39;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 03:
    if (quant >= 4) {
      preco = 3.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      preco = 4.20;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;

  case 04:
    if (quant >= 3) {
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
    if (quant >= 2) {
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
    if (quant >= 5) {
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
    if (quant >= 7) {
      preco = 1.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      preco = 2.20;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;
    
     case 08:
    if (quant >= 5) {
      preco = 3.20;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Detergente (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      preco = 4.00;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Detergente (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;
    
    case 09:
    if (quant >= 3) {
      preco = 10;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Caixa de Chocolate (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      preco = 11;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Caixa de Chocolate (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;
    
    case 10:
    if (quant >= 6) {
      preco = 4.99;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Banana (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      preco = 5.75;
      var = preco * quant;
      printf("Voce esta levando %i quantidade(s) de Banana (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;

  default: 
    printf("código invalido");
  }
}
