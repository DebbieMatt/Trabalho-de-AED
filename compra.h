#include <stdio.h>

int compra() {  // contabiliza a quantidade de produtos passados e quais.
  int item, quant;
  float var, total;
  
  do{
  printf("Por favor digite o item de nossa nosso supermercado, que deseja levar : ");
  scanf("%d", &item);

  printf("Digite a quantidade: ");
  scanf("%d", &quant);
  
} while (item != 0);

  switch (item) {

  case 01:
    if (quant >= 3) {
     
      var += 1.95 * quant;
      printf("Voce esta levando %i quantidade(s) sabonete(s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
     
      var += 2.10 * quant;
      printf("Voce esta levando %i quantidade(s) sabonete(s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }

    break;

  case 02:
    if (quant >= 3) {
      
      var += 8.20 * quant;
      printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var += 9.39 * quant;
      printf("Voce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
    }
    break;

  case 03:
    if (quant >= 4) {
      
      var += 3.99 * quant;
      printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var +=  4.20 * quant;
      printf("Voce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;

  case 04:
    if (quant >= 3) {
      
      var += 4.80 * quant;
      printf("Voce esta levando %i quantidade(s) de Óleo de soja (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var += 4.99 * quant;
      printf("Voce esta levando %i quantidade(s) de Óleo de soja(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;

  case 05:
    if (quant >= 2) {
     
      var += 19.85 * quant;
      printf("Voce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
    
      var += 21 * quant;
      printf("Voce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;

  case 06:
    if (quant >= 5) {
      
      var += 5.55 * quant;
      printf("Voce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var += 5.99 * quant;
      printf("Voce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
     
    }
    break;

  case 07:
    if (quant >= 7) {
      
      var += 1.99 * quant;
      printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var += 2.20 * quant;
      printf("Voce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;
    
  case 8:
    if (quant >= 5) {
      
      var += 3.20 * quant;
      printf("Voce esta levando %i quantidade(s) de Detergente (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
     
      var += 4.00 * quant;
      printf("Voce esta levando %i quantidade(s) de Detergente (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;
    
  case 9:
    if (quant >= 3) {
      
      var += 10.00 * quant;
      printf("Voce esta levando %i quantidade(s) de Caixa de Chocolate (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var = 11.00 * quant;
      printf("Voce esta levando %i quantidade(s) de Caixa de Chocolate (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;
    
  case 10:
    if (quant >= 6) {
      
      var = 4.99 * quant;
      printf("Voce esta levando %i quantidade(s) de Banana (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    } else {
      
      var = 5.75 * quant;
      printf("Voce esta levando %i quantidade(s) de Banana (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var);
      
    }
    break;

  default: 
    printf("código invalido");
  }
  
  printf("valor total %.2f", var);
}
