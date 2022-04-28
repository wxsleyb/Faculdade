#include <iostream>

using namespace std;

struct Academia
    {
    char nome[40];            
    float peso;          
    float altura;           
    float imc;
    }atleta[100];
    

int main()
{
    

    Academia atleta;
    for(int i=0; i<3; i++)
    {
        cout << "Digite o nome, peso e altura" << endl; 
        cin>>atleta.nome;
        cin>>atleta.peso;
        cin>>atleta.altura;
        atleta.imc= (atleta.peso)/(atleta.altura*atleta.altura);
        cout << "-----------" << endl;
        cout << atleta.nome << endl; 
        cout << "Seu imc eh: " << atleta.imc << endl;
        cout << "-----------" << endl;
        
    }
    
    return 0;
}