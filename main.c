//NÃO ALTERE ESSE ARQUIVO

#include <stdio.h>
#include "lib/cs50.h"
#include "cartao.h"

int main()
{
    long long num = get_long_long("Numero: ");

    string resp = verificar_cartao(num);
    printf("%s\n", resp);
}