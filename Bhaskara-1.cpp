#include <iostream>
#include <math.h> //mais elegante usar #include <cmath> porque é a biblioteca do C puro e não do C++

using namespace std;

int main()
{
    // Entradas:
    // a, b, c : números reais
    // delta, x1, x2, x : números reais

    float a, b, c;
    float delta, x1, x2, x;

    // leia(a, b, c)
    // std::cin >> a >> b >> c;         //std::cout << std::fixed << std::setw( 11 ) << std::setprecision( 6 ) << imc

    cout << "Entre com o valor de A" << endl;
    cin >> a;

    cout << "Entre com o valor de B" << endl;
    cin >> b;

    cout << "Entre com o valor de C" << endl;
    cin >> c;
    
    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "As raizes sao: " << x1 << " e " << x2;
    }

    if (delta == 0)
    {
        x = (-b) / (2 * a);
        cout << "A raiz eh: " << x;
    }

    if (delta < 0)
    {
        cout << "Não Existe";
        
    }
}