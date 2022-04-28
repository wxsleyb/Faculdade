#include <iostream>
#include <math.h>
#define N 4
using namespace std;

float calculaMediaNumeros(int vet[], int qt)
{
    float soma=0;

    for (int i=0; i<qt; i++)
    {
        soma+= vet[i];
    }
    // cout << "soma:" << soma << endl;
    
    return soma/qt;

    //media= (float) soma/N;

   //cout << "soma" << soma << endl;
}

float acimaMediaNumeros(int vet[], int qt)
 {
     int acima=0;

 
     for (int i=0; i<N; i++)
    {
        if (vet [i] > calculaMediaNumeros(vet, N))
        {
            acima++;
        
        }
    }
    return acima;
 }
     
int maiorNumeroDoVetor (int vet[], int qt)
{
    float maior= vet[0];
    for (int i=1; i<N; i++)
    {
        if (vet[i] > maior)
        {
        maior=vet[i];
        }
    }
    return maior;
}

int main()
{
    int i, vet[N], acima=0, abaixo=0;
    float media;

    for (i=0; i<N; i++)
    {
        cout << "Digite os numeros" << endl;
        cin >> vet[i];
    }
    cout << "media: " << calculaMediaNumeros(vet, N) << endl;

    cout << "acima da media:" << acimaMediaNumeros(vet, N)<< endl;
    cout << "o maior numero:" << maiorNumeroDoVetor (vet, N) << endl;
    
    
    
    return 0;




}