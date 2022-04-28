#include <iostream>
#define N 6

using namespace std;

int maioresQueUltimo (float vet[], int qt)
{
    int i, maiores=0;
     // Nesse loop, estamos indo até o penultimo elemento
    // por isso usamos qt-1 e não qt como de costume.
  for (i=0; i<qt-1; i++)
  {
      // Um vetor com qt elementos, o ultimo está
        // armazenado na posicao qt-1
      if (vet[i] > vet [qt-1])
      {
          maiores++;
      }     
  }
  return maiores;

}

int main()
{
    int i;
    float vet[N];
    for (i=0; i<N; i++)
    {   
        cin >> vet[i];
    }

cout << "Os maiores que o ultimo sao/eh: "  << endl;
cout << maioresQueUltimo(vet, N) << endl;

}