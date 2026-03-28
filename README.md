# Dinheiro 🪙

Algoritmos gananciosos (greedy algorithms) são aqueles que, a cada passo, fazem a escolha que parece ser a melhor naquele momento. No caso de dar o troco, a melhor escolha é sempre usar a maior moeda possível para reduzir o valor restante o mais rápido possível.

## Especificação
Implemente, em um arquivo chamado `dinheiro.c`, uma biblioteca que calcula o número mínimo de moedas necessárias para dar um troco. A `main.c` já lidará com o `get_int` e o `printf`, você só precisa focar na lógica:

1. **dinheiro.h**: Crie este arquivo e declare o protótipo:
   - `int calcular_moedas(int centavos);`
2. **dinheiro.c**: Implemente a função que:
   - Receba um valor inteiro de centavos (ex: 25, 50, 75).
   - Calcule quantas moedas de **25**, **10**, **5** e **1** centavo são necessárias.
   - Retorne o **total somado** de moedas.

## Demonstração
O programa, ao utilizar sua função, deve se comportar assim:

```bash
$ ./dinheiro
Troco devido: 70
4
```