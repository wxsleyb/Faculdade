#include <iostream>

using namespace std;

int main()

{

int numero;

int soma=0;

int digito;

cout << "Digite um numero de tres digitos" << endl;

cin >> numero;

if (numero>=100 && numero<=999)

{

while (numero > 0)

{ // ex: 123

digito = numero % 10; //ultimo digito = 3

numero= numero/10; // 12 e assim vai

soma += digito;

}

cout << " A soma dos digitos do numero eh:" << soma << endl;

} else

{

cout << "O numero que digitou nao tem tres digitos" << endl;

}

return 0;

}