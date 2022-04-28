#include <iostream>
#include <math.h>
using namespace std;

void CalcMaiorESomaSalario(int qtdf)
{
 int matricula, sexo;
 float salario=0, SomaSalario=0;
 float MenorSalario=0, MaiorSalario=0;
 

 for (int i=0; i<qtdf; i++)
     {
         cout << "digite matricula" << endl;
         cin >> matricula;
         cout << "digite sexo" << endl;
         cin >> sexo;
         cout << "digite salario" << endl;
         cin >> salario;
     
           if (i==0)
             {
               MaiorSalario=salario;
               MenorSalario=salario;
             }

                if (salario>MaiorSalario)
                 { 
                   MaiorSalario= salario;
                 }
                    else if (salario< MenorSalario)
                     {
                       MenorSalario=salario;
                     }
                  
     SomaSalario += salario;
     }
     
     cout << "O maior salario do depart eh:" << MaiorSalario << endl;
     cout << "A soma dos salarios eh:" << SomaSalario << endl;
  //return SomaSalario;
}

int main()
{
  int qtdf;
  cout << "Digite a quantidade de funcionarios" << endl;
  cin >> qtdf;


  CalcMaiorESomaSalario(qtdf);
}