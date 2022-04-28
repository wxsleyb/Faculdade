#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;


int main(){
    float a, b, c, d;
    float adicao, subtracao, multiplicacao, divisao;
    float raizquadradaA, raizquadradaB, MediaMateria, quadradoA, quadradoB;
    float rd3p1, rd3p2, rd3p3;

    cout << "Digite o primeiro numero: " << endl;
    cin >> a;
    cout << "Digite o segundo numero: " << endl;
    cin >> b;
    // cout << "Digite o terceiro numero se houver: " << endl;
    // cin >> c;
    // cout << "Digite o quarto numero se houver: " << endl;
    // cin >> d;


    adicao = a+b;
    subtracao = a-b;
    multiplicacao = a*b;
    divisao = a/b;
    raizquadradaA= sqrt(a);
    raizquadradaB= sqrt(b);
    MediaMateria = (a + b)/2;
    quadradoA = a*a;
    quadradoB = b*b;
    
    

    
    cout << "Adicao: " << adicao << endl;
    cout << "Subtracao: " << subtracao <<endl;
    cout << "Multiplicacao: " << multiplicacao << endl;
    cout << "Divisao: " << divisao << endl;
    cout << "Raiz quadrada primeiro numero: " << raizquadradaA << endl;
    cout << "Raiz quadrada primeiro numero: " << raizquadradaB<< endl;
    cout << "Quadrado primeiro numero " << quadradoA<< endl;
    cout << "Quadrado segundo numero " << quadradoB<< endl;
    

    if (MediaMateria>5){

    cout << "Sua media na materia eh: " << MediaMateria << endl;
    cout << "Voce esta aprovado!" << endl;
    } else {
        cout << "Sua media na materia eh: " << MediaMateria << endl;
        cout << "Voce esta reprovado!" << endl;
    }
}