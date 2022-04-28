#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int qtd, n, i;
  qtd=0;
  cout << "digite os numeros" << endl;

  for (i=0; i<5; i++)
    {
         cin >> n;
        if (n>30){
        qtd++;
        }
      

    }
     cout << "A quantidade de numeros maior que 30 eh: " << qtd;
}




