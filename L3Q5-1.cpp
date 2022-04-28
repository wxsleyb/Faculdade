#include <iostream>
#include <math.h>
#define N 8
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

    for (int i=0; i<N; i++)
    {
        if (vet [i] > calculaMediaNumeros(vet, N))
        {
            acima++;
        } else {
            abaixo ++;
        }
       
    }
     cout << "acima da media" << acima << endl;
     cout << "abaixo da media" << abaixo << endl;
    
    
    return 0;




}