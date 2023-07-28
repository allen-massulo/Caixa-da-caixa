#include <stdio.h>
#include <stdlib.h>

int* caixa(int valor)
{
    int cem = 0, um = 0, cinco = 0, cinq = 0, dez = 0;

    int* notas = (int*)malloc(5 * sizeof(int));
  
    cem = valor / 100;
    valor = valor % 100;
    notas[0] = cem;
  
    cinq = valor / 50;
    valor = valor % 50;
    notas[1] = cinq;
  
    dez = valor / 10;
    valor = valor % 10;
    notas[2] = dez;
  
    cinco = valor / 5;
    valor = valor % 5;
    notas[3] = cinco;
  
    um = valor / 1;
    valor = valor % 1;
    notas[4] = um;
          
    return notas;
}
