//NÃO ALTERE ESSE ARQUIVO

#include <stdio.h>
#include "lib/cs50.h"
#include "dinheiro.h"

int main()
{
    int troco; 
    do
    {
        troco = get_int("Troco devido: ");
    } while (troco < 0);

    int moedas = calcular_moedas(troco);
    printf("%i\n", moedas);
}