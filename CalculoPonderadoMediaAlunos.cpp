#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

void calcpond (float nota1, float nota2){
  float MediaPonderada;
  MediaPonderada = ((nota1 * 2) + (nota2 * 4)) / 6;
  cout << "A media do aluno eh" << MediaPonderada << endl;

if (MediaPonderada < 6) {
  cout << "Ele(a) esta de recuperacao" << endl;

}

if (MediaPonderada > 6){
    cout << "Ele(a) esta aprovado" << endl;


}

}

int main ()
{ 

float nota1, nota2;

cout << "Digite a nota da primeira prova" << endl;
cin >> nota1;

cout << "Digite a nota da segunda prova" << endl;
cin >> nota2;

calcpond (nota1, nota2);

return 0;

}
