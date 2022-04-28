#include <iostream>
#define N 3
using namespace std;

int main()
{
    int i;
    float soma, media, notas [N];
    soma=0;

    for (i=0; i<N; i++)
    {
        cin>> notas[i];
        soma += notas[i];
    }
    media = soma/ N;
    for (i=0; i<N; i++)
    {
        if (notas[i]> media)
        {
            cout << notas[i] << endl;
        }
    
    }
}