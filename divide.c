#include "divide.h"

int divide(int a, int b)
{
    if (b == 0)
    {
        return 0; // caso de divisão por zero
    }
    return a / b;
}
