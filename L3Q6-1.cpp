#include <iostream>
#include <math.h>
#define N 3
using namespace std;

float somaDeVetores (float A[], float B[], float C[], int q)
{
    int i;
          //somavet1, somavet2
    for (i=0; i<N; i++)
    {
    cout << "Valor de A:" << endl;
    cin >> A[i];
    }

     for (i=0; i<N; i++)
    {
    cout << "Valor de B:" << endl;
    cin >> B[i];
    }

     for (i=0; i<N; i++)
    {
    C[i] = A[i] + B[i];
    }

     for (i=0; i<N; i++)
    {
    cout << C[i] << endl;
    }
    return C[i];
}
 


int main()
{
    float A[N], B[N], C[N];

    
somaDeVetores (A, B, C, N);






}