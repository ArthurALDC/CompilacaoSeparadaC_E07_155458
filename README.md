# Exemplo: Compilação Separada em C

Demonstração pedida de como separar **protótipos** (`.h`) e **implementações** (`.c`) com múltiplos módulos, Makefile e operações aritméticas.

## Estrutura do Projeto

```
.
├── main.c # Programa principal
├── soma.c/.h # Função soma
├── subtrai.c/.h # Função subtrai
├── multiplica.c/.h # Função multiplicação
├── potencia.c/.h # Função potência
├── divide.c/.h # Função divisão inteira
├── fatorial.c/.h # Função fatorial
├── Makefile # Regras de compilação
└── README.md # Descrição do Projeto

```

## Operações Implementadas

- Soma
- Subtração
- Multiplicação
- Potência
- Divisão inteira
- Fatorial

## Como Compilar

```bash

make

```

Isso compila cada `.c` em um `.o` e depois gera o executável `main`.

## Como Executar

```bash

make run
```

Saída esperada:
```
s = 9
x = 15
y = 8
z = 15
w = 120
j = 480
```

## Como Limpar

```bash

make clean

```
Remove o executável e todos os objetos.