#include <iostream>
#include <math.h>
#define N 3
using namespace std;

void contaParImpar (int vet[], int qt, int &par,int &impar)
{
    
    for (int i=0; i<N; i++)
    { 
         if (vet[i] % 2 == 0)
         {
          par++;
         }
            else
             {
             impar++;
             }
    
    }

}



int main()
{
  int vet[N], i;
  int npar=0, nimpar=0;

       for (i=0; i<N; i++)
     {
      cout << "Digite o numero" << endl;
      cin >> vet[i];
     }

contaParImpar(vet, N, npar, nimpar);

cout << "pares: " << npar << endl;
cout << "impares: " << nimpar << endl;

}
