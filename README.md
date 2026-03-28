# Cartão 💳

Este é um desafio clássico de lógica e algoritmos. O objetivo é verificar a validade de um número de cartão de crédito e identificar a sua bandeira (Visa, MasterCard ou American Express) utilizando o **Algoritmo de Luhn**.

## Especificação
Implemente uma biblioteca que valide números de cartões. A `main.c` já está configurada para receber o número do usuário e exibir o resultado final. Você deve focar nos seguintes arquivos:

1. **cartao.h**: Crie este arquivo e declare o protótipo:
   - `string verificar_cartao(long long numero);`
2. **cartao.c**: Implemente a lógica que:
   - Recebe um número do tipo `long long`.
   - Aplica o **Algoritmo de Luhn** para verificar se o número é matematicamente válido.
   - Identifica a bandeira:
     - **AMEX**: 15 dígitos, começa com 34 ou 37.
     - **MASTERCARD**: 16 dígitos, começa com 51, 52, 53, 54 ou 55.
     - **VISA**: 13 ou 16 dígitos, começa com 4.
   - Retorna a string correspondente (`"AMEX"`, `"MASTERCARD"`, `"VISA"`) ou `"INVALIDO"` caso não passe nos testes.

## Algoritmo de Luhn
O algoritmo (ou fórmula "módulo 10") funciona seguindo estes passos. Vamos usar o número fictício `4222222222222` como exemplo:

1. **Multiplicação Alternada:**
   Começando do penúltimo dígito e indo para a esquerda, multiplique cada segundo dígito por 2.
   - Dígitos: 4 [**2**] 2 [**2**] 2 [**2**] 2 [**2**] 2 [**2**] 2 [**2**]  2
   - Selecionados: 2, 2, 2, 2, 2, 2
   - Multiplicados por 2: 4, 4, 4, 4, 4, 4

2. **Soma dos Algarismos:**
   Some os **algarismos** dos produtos obtidos. Por exemplo, se um produto for 16, você soma `1 + 6 = 7`.
   - 4 + 4 + 4 + 4 + 4 + 4 = **24**

3. **Soma dos Restantes:**
   Some os dígitos que **não** foram multiplicados por 2 (incluindo o último).
   - 4 + 2 + 2 + 2 + 2 + 2 + 2 = **16**

4. **Verificação Final:**
   Some os resultados dos passos 2 e 3.
   - 24 + 16 = **40**
   - Se o total terminar em 0, o número é **VÁLIDO**.

## Demonstração
Ao compilar com a `main.c`, o comportamento esperado é:

```bash
$ ./cartao
Numero: 4222222222222
VISA
```
