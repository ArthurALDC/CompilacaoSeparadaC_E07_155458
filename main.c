#include <stdio.h>
#include "soma.h"
#include "subtrai.h"
#include "multiplica.h" // Modulo 1
#include "potencia.h"   // Modulo 2
#include "divide.h"     // Modulo 3
#include "fatorial.h"   // Modulo 4

int main(void)
{
    int s;
    s = soma(12, 6);
    s = subtrai(s, 9);
    printf("s = %d\n", s);

    int x;
    x = multiplica(3, 5); // Usando o modulo 1
    printf("x = %d\n", x);

    int y;
    y = potencia(2, 3); // Usando o modulo 2
    printf("y = %d\n", y);

    int z;
    z = divide(30, 2); // Usando o modulo 3
    printf("z = %d\n", z);

    int w;
    w = fatorial(5); // Usando o modulo 4
    printf("w = %d\n", w);

    int j;
    j = soma(x, y);
    j = subtrai(j, z);
    j = multiplica(j, w);
    j = divide(j, 2);
    printf("j = %d\n", j);
    return 0;
}
