#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

using namespace std;

int main(void)

{
    
    float opcao;
      
    float altura;

    float peso;

    float imc;

    
while (opcao != 0)
{

    cout <<"Digite sua altura (em metros, use ponto e nao virgula): " <<endl;

    cin>>altura;

    cout<<"Digite seu peso (em kg, use ponto e nao virgula): " <<endl;

    cin>>peso;

    imc=peso/(altura*altura);

    

    cout <<"Seu IMC eh: " <<imc <<endl;

    

    if(imc<18.5){

        cout <<"Esta abaixo do indice de 18.5, portanto esta abaixo do peso ideal e tem que se alimentar melhor" <<endl;

    }

    if((imc>=18.5) && (imc<24.9)){

        cout <<"Como o indice de peso ideal eh entre 18.5 e 24.9, esta com o peso ideal, parabens!" <<endl;

    }

    if((imc>=24.9) && (imc<29.9)){

        cout <<" Entre 25 e 29.9 de indice, voce esta com sobrepeso"<<endl;

    }

    if((imc>=29.9) && (imc<34.9)){

        cout <<" Entre 30 e 34.9 de indice, voce esta com obesidade grau um"<<endl;

    }

    if((imc>=34.9) && (imc<39.9)){

        cout <<" Entre 35 e 39.9 de indice, voce esta com obesidade grau dois"<<endl;

    }
    
    if (imc >= 39.9){
        
        cout <<" CUIDADO! Acima de 40 de indice, esta com obesidade morbida, tem que se cuidar!!"<<endl;
    }
}


return 0;

}