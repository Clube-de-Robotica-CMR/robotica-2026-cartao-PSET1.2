//NÃO ALTERE ESSE ARQUIVO

#include <stdio.h>
#include "lib/cs50.h"
#include "alerta.h"

int main()
{
    int quant; 
    do
    {
        quant = get_int("Quantos alertas deseja emitir? ");
    } while (quant < 0);

    emitir_alerta(quant);
}