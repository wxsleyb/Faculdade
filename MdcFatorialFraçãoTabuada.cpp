#include <iostream>
#include <math.h>

using namespace std;

int mdc(int a, int b)
{
   if (a>b)
   {
       int aux= a;
       a = b;
       b = aux;
   }
 int resto;
 resto= a % b;

  while (resto != 0)
    { 
        a = b;
        b = resto;
        resto= a % b; 
    }
  return b;
}

void ImprimeFracaoReduzida(int numerador, int denominador)
{
    int m= mdc(numerador, denominador);
     
    cout << numerador/m << "/" << denominador/m << endl;

}

void ImprimeSomaFracao(int n1, int d1,int n2, int d2)
{
   int n, d;

  n = n1*d2 + n2*d1;
  d = d1*d2;
  cout << n << "/" << d << endl; 
}

int Fatorial (int n)
{
    int i, f=1;
    for (int i=n; i>=1; i--)
      {
       f = f*i;
      }
    return f;

}

int Fat( int n)
{ 

 if (n == 0)
 {
   return 1;
   } else
      {
        return n * Fat(n-1);
      }
}

void Tabuada ()
{ 
int i, j;

   for (i=1; i<=10; i++)
  {
    cout << "TABUADA DO " << i << endl;
    cout << "===============================" << endl;
         for (j=1; j<=10; j++)
        {
             cout << i << "x"<< j << "=" << i*j << endl;
        }
 
    
  }
}
int main()
{

cout << mdc(8,12) << endl;
cout << mdc (75,100) << endl;

ImprimeFracaoReduzida(10,20);
ImprimeSomaFracao(2,10,3,10);
cout << Fatorial(0) << endl;;
cout << Fat (0) << endl;

Tabuada();

}




