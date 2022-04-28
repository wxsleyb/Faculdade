#include <iostream>
#include <math.h>

using namespace std;

int calcula_soma (int num1, int num2){

int soma;

soma =  num1 + num2;

return soma;

}

float calcula_media (int num1, int num2){

int media;
media= calcula_soma(num1, num2);
media = media/2;

return media;

}


int main (){

int num1, num2, soma, media;

cout << "Digite o primeiro numero" << endl;
cin >> num1;

cout << "Digite o segundo numero" << endl;
cin >> num2;

calcula_media (num1, num2);

cout << "A soma dos dois numeros eh:" << calcula_soma(num1, num2) << endl;
cout << "A media dos dois numeros eh:" << calcula_media (num1, num2) << endl;

}
