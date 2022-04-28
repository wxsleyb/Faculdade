#include <iostream>
#include <math.h>

using namespace std;

void ExibeMatriculaESalario(int qtdf)
{
    int matricula, salario=0;
    float MenorSalario=0, MaiorSalario=0;
    int matriculaMaiorSal=0;
    for (int i=0; i<qtdf; i++)
    {
      cout << "Digite matricula" << endl;
      cin >> matricula;
      cout << "Digite salario" << endl;
      cin >> salario;

         if (i==0 ||salario>MaiorSalario)
         {
             matriculaMaiorSal= matricula;
             MaiorSalario = salario;
         }
         else if (i==0 ||salario>MenorSalario)
         {
             
             MenorSalario=salario;
         }
      
       }     
     
    
    cout << "A matricula do maior salario eh:" << matriculaMaiorSal << endl;
    cout << "O maior salario eh:" << MaiorSalario << endl;

    
}

int main()
{
    int qtdf;

    cout << "Digite a quantidade de func" << endl;
    cin >> qtdf;


 ExibeMatriculaESalario(qtdf);
}