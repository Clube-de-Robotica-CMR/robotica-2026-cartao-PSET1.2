# Alerta! 🚨

Se você já entendeu como as funções funcionam, vamos colocar esse conhecimento em prática de forma modular. Desta vez, o objetivo não é apenas resolver o problema, mas organizar o seu código como se estivesse criando uma ferramenta reutilizável por outros programadores.

## Especificação
Diferente dos desafios anteriores, você não escreverá a função main. Ela já existe no repositório. Seu trabalho é criar a "biblioteca" que a main utiliza:

1. **alerta.h**: Crie este arquivo e declare o protótipo da função:
   - void emitir_alerta(int n);
2. **alerta.c**: Crie este arquivo e implemente a lógica da função:
   - A função deve receber um número inteiro n.
   - Deve utilizar um loop para imprimir a mensagem "BIP!" exatamente n vezes (uma por linha).

## Demonstração
Ao compilar o seu código com a nossa main.c (digitando `make main`), o resultado esperado no terminal será:

```bash
$ ./alerta
Quantos alertas deseja emitir? 3
BIP! 
BIP! 
BIP! 
```