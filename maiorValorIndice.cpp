#include <iostream>
#define N 5

using namespace std;

int indiceMaiorValor (float vet[], int qt)
{
    int maiorIndice= 0;
    for (int i=0; i<qt; i++)
    if (i==0|| vet[i] > vet [maiorIndice])
       {
           maiorIndice=i;
       }
     return maiorIndice;
}

float MaiorValorArmazenado(float vet[], int qt)
{
    int i, maiorNumero= vet[0];

    for (i=0; i < qt; i++)
    {
        if (i==0 || vet[i] > maiorNumero)
        {
            maiorNumero= vet[i];
            
        }
    }
    return maiorNumero;
}

int main()
{

    int i;
    float vet[N];
    
    for (i=0; i<N; i++)
    {
        
        cin >> vet [i];
    }

    cout << "o maior valor e: ";
    cout << MaiorValorArmazenado(vet, N) << endl;

    cout << "o indice do maior numero e: ";
    cout << indiceMaiorValor(vet, N) << endl;
}
