#include <iostream>
using namespace std;

void f(int vendas[6][12], float preco[6]) // pode tirar o numero do segundo parenteses vendas[6][], preco[] pode tirar numero tambem
{
   int ano, mes, somaAno; 
   somaAno=0;            //poderia usar i, j (variaveis usadas pra percorrer vetor e matrizes)
                           // ano=6, mes=12
   for (ano=0; ano<6; ano++)
   {
       
       for (mes=0; mes<12; mes++)
       {
           somaAno+= vendas[ano][mes];
          cout << "vendas no mes " << mes + 1 << " "<< vendas[ano][mes]<< endl;
       }
       cout << "vendas no ano " << 2010 + ano << "=" << somaAno * preco[ano]<< endl;
   }                        
}

int main()
{
    int vendas[6][12]= {
    {2, 10, 13, 15, 5, 1, 3, 11, 20, 18, 16, 20},
    {12, 1, 15, 9, 19, 10, 9, 13, 5, 15, 2, 6},
    {9, 19, 11, 8, 17, 11, 5, 19, 20, 13, 5, 7},
    {3, 14, 10, 5, 13, 19, 3, 20, 19, 12, 20, 13},
    {5, 11, 1, 4, 2, 1, 13, 10, 2, 11, 18, 16},
    {1, 10, 4, 6, 2, 9, 15, 19, 3, 20, 18, 19}
};
float preco[6]= {10000, 12000, 14000, 16000, 20000, 24000};

f(vendas, preco);
}