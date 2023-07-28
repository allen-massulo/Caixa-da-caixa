#include <stdio.h>
#include "caixa_da_caixa.h"

int main()
{
    int valor, i;

    printf("Insira um valor para sacar entre 10 e 600 reais: ");
    scanf("%d", &valor);

    while (valor < 10 || valor > 600)
    {
        printf("\nValor invalido! Digite outro valor: ");
        scanf("%d", &valor);
    }

    int* notas = caixa(valor);
  
    for(i = 0; i < 5; i++)
    {
    printf("\nSacando %d notas", notas[i]);
    }

    free(notas);
  
    return 0;
}
