#include <iostream>
#include <math.h>

int mainCerta()
{
    int i, qtd, n;
    qtd = 0;
    for (i = 0; i < 15; i++)
    {
        std::cin >> n;
        if (n > 30)
        {
            // contador = contador + 1;
            // contador += 1;
            qtd++;
        }
    }
    std::cout << qtd;
}



