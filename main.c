#include <stdio.h>

int main() {

  int *ponteiro;
  int quant_elementos, i;
  
  printf("Informe a quantidade que desea alocar: ");
  scanf("%i", &quant_elementos);

  ponteiro = (int *) malloc(quant_elementos * sizeof(int));

  if (ponteiro == NULL) {
    printf("Nao foi possivel alocar a memoria desejada");
    system("pause");
    exit(1);
  }

  for (i = 0; i <quant_elementos; i++) {
    printf("Informe o valor da posicao [%i]: ", i);
    scanf("%i", &ponteiro[i]);
  }

  printf("\n");
  
  for (i = 0; i < quant_elementos; i++) {
    printf("O valor armazenado na posicao [%i] e: %i\n", i, ponteiro[i]);
  }
  
  return 0;
}