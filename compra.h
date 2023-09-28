#include <stdio.h>

int compra () {  // contabiliza a quantidade de produtos passados e quais.
  int item, quant;
  float var, var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, total, c_total;
  
  for (int i = 0; i < 5; i++){
  printf("\nPor favor digite o item de nossa nosso supermercado, que deseja levar : ");
  scanf("%d", &item);

  printf("Digite a quantidade: ");
  scanf("%d", &quant);

  switch (item) {

  case 01:
    if (quant >= 3) {
     
      var1 += 1.95 * quant;
      printf("\nVoce esta levando %i quantidade(s) sabonete(s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var1);
      var1++;
      
    } else {
     
      var1 += 2.10 * quant;
      printf("\nVoce esta levando %i quantidade(s) sabonete(s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var1);
      var1++;
    }

    break;

  case 02:
    if (quant >= 3) {
      
      var2 += 8.20 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var2);
      var2++;
      
    } else {
      
      var2 += 9.39 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Pão de forma(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var2);
      var2++;
    }
    break;

  case 03:
    if (quant >= 4) {
      
      var3 += 3.99 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var3);
      var3++;
      
    } else {
      
      var3 +=  4.20 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Macarrão do tipo "
             "espaguete(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var3);
      var3++;
      
    }
    break;

  case 04:
    if (quant >= 3) {
      
      var4 += 4.80 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Óleo de soja (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var4);
      var4++;
      
    } else {
      
      var4 += 4.99 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Óleo de soja(s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var4);
      var4++;
      
    }
    break;

  case 05:
    if (quant >= 2) {
     
      var5 += 19.85 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var5);
      var5++;
      
    } else {
    
      var5 += 21 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Arroz 5kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var5);
      var5++;
      
    }
    break;

  case 06:
    if (quant >= 5) {
      
      var6 += 5.55 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var6);
      var6++;
      
    } else {
      
      var6 += 5.99 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Feijão 1kg (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var6);
      var6++;
     
    }
    break;

  case 07:
    if (quant >= 7) {
      
      var7 += 1.99 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var7);
      var7++;
      
    } else {
      
      var7 += 2.20 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Milho de pipoca (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var7);
      var7++;
      
    }
    break;
    
  case 8:
    if (quant >= 5) {
      
      var8 += 3.20 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Detergente (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var8);
      var8++;
      
    } else {
     
      var8 += 4.00 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Detergente (s). \n", quant);
      printf("Lhe custara R$ %.2f \n", var8);
      var8++;
      
    }
    break;
    
  case 9:
    if (quant >= 3) {
      
      var9 += 10.00 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Caixa de Chocolate (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var9);
      var9++;
      
    } else {
      
      var9 = 11.00 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Caixa de Chocolate (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var9);
      var9++;
      
    }
    break;
    
  case 10:
    if (quant >= 6) {
      
      var10 = 4.99 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Banana (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var10);
      var10++;
      
    } else {
      
      var10 = 5.75 * quant;
      printf("\nVoce esta levando %i quantidade(s) de Banana (s). \n",
             quant);
      printf("Lhe custara R$ %.2f \n", var10);
      var10++;
      
    }
    break;

  default: 
    printf("\ncódigo invalido \n");
  }
  
  c_total = var1 + var2 + var3 + var4 +var5 + var6 + var7 + var8 + var9 + var10;
  
  }
  
  printf(" \n valor total %.2f", c_total);
  
}
