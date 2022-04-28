#include <iostream>
#define N 10

using namespace std;

int main() 
{
  int num[N], i; 
  int menorNum = 1410065407;
  float media, soma = 0;
  cout << "Digite os 10 numeros: " << endl;
 for (i = 0; i < N; i++)
     {
       cin >> num[i];
       soma = soma + num[i];
     }
 media = (soma) / N;
 
  for (i = 0; i <N; i++)
         {
          if (num[i] > media)
             {
                  if (num[i] < menorNum)
                 {
                  menorNum = num[i];
                 }
             }
         } 
 
 cout << "A media dos numeros: " << media << endl;
 cout << "O menor numero que eh maior que a media dos numeros: " << menorNum << endl;
 
 return 0;
}
 



