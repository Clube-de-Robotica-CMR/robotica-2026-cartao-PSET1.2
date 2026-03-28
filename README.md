# Área do Quadrado 📐

Neste desafio, vamos subir um degrau. Além de criar uma função para organizar o seu código, você aprenderá a fazer com que uma função devolva um valor processado para quem a chamou.

## Especificação
Utilizando os arquivos já preparados no seu repositório, você deve implementar uma lógica que calcule a área de um quadrado. A função `main` ficará responsável por interagir com o usuário, enquanto a sua biblioteca cuidará do cálculo:

1. **geometria.h**: Crie este arquivo e declare o protótipo da função:
   - int calcular_area(int lado);
2. **geometria.c**: Crie este arquivo e implemente a lógica:
   - A função deve receber um número inteiro `lado`.
   - Deve retornar o valor da área (lado * lado) para a função `main`.

## Demonstração
Ao compilar o seu código com a `main.c` fornecida (digitando `make main`), o programa deverá comportar-se desta forma:

```bash
$ ./geometria
Lado: 5
Area do quadrado: 25
```