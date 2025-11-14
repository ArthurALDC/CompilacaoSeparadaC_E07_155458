#include "fatorial.h"

int fatorial(int n)

{
    if (n < 0)
    {
        return -1;
    } // caso de número negativo, erro

    if (n == 0 || n == 1)
    {
        return 1;
    } // o fatorial de 0 ou 1 é 1

    int resultado = 1;
    for (int i = 2; i <= n; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}