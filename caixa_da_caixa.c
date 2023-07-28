#include <stdio.h>

int main()
{
    int cem = 0, um = 0, cinco = 0, cinq = 0, dez = 0;
    float valor;

    printf("Insira um valor para sacar entre 10 e 600 reais: ");
    scanf("%.2f", &valor);

    while (valor < 10 || valor > 600)
    {
        printf("\nValor invalido! Digite outro valor: ");
        scanf("%.2f", &valor);
    }

    cem = valor / 100;
    valor = valor % 100;

    cinq = valor / 50;
    valor = valor % 50;
    
    dez = valor / 10;
    valor = valor % 10;
    
    cinco = valor / 5;
    valor = valor % 5;

    um = valor / 1;
    valor = valor % 1;

    printf("\nSacando %d notas de 100 reais, %d notas de 50 reais, %d notas de 10 reais, %d notas de 5 reais e %d moedas de 1 real.", cem, cinq, dez, cinco, um);
    printf("\nSobraram %.2f centavos na conta.", valor);
}