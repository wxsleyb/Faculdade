#include <iostream>
#include <math.h>

using namespace std;

calcula_soma (int num1, int num2){

int soma;

soma =  num1 + num2;
cout << "A soma dos dois numeros eh:" << soma << endl;

return soma;
}


calcula_media (int num1, int num2){

float media;

media = (num1 + num2)/2;
cout << "A media dos dois numeros eh:" << media << endl;
}


int main (){

int num1, num2;

cout << "Digite o primeiro numero" << endl;
cin >> num1;

cout << "Digite o segundo numero" << endl;
cin >> num2;

calcula_soma (num1, num2);

calcula_media (num1, num2);

}
