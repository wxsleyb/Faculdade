#include <iostream>
#include <math.h>

using namespace std;

 float ImprimeMaiorSalario(int qtdf)
 {  
   int matricula, sexo;
   float salario;
   float MaiorSalario =0, MenorSalario= 0, maiorMatricula=0, menorMatricula=0;
   float somaSalario = 0;
   int c=0;
   for (int i=0; i<qtdf; i++)
   {
     cout << "Digite a matricula" << endl;
     cin >> matricula;
     cout << "Digite o sexo (1= feminino, 2=masculino)" << endl;
     cin >> sexo;
     cout << "Digite o salario" << endl;
     cin >> salario;
     somaSalario+= salario;
     
     if (i==0)
     {
         maiorMatricula= matricula;
         MaiorSalario= salario;
         menorMatricula= matricula;
         MenorSalario= salario;
     } if (i==0 || salario>MaiorSalario){
         maiorMatricula= matricula;
         MaiorSalario= salario;        
        }      if (i==0 || salario< MenorSalario){
                menorMatricula= matricula;
                 MenorSalario = salario;
 
            }
            
     }   
      cout << "matricula do menor salario:" << menorMatricula << endl;
      cout << "O menor salario eh " << MenorSalario << endl;
      cout << "matricula do maior salario:" << maiorMatricula << endl;
      // cout << "O maior salario eh " << MaiorSalario << endl;
      cout << "A soma dos salarios eh:" << somaSalario << endl;
      cout << "A media dos salarios eh:" << somaSalario/qtdf << endl;
      cout << "O maior salario eh:" << endl;

      return MaiorSalario;
      
    }
    

int main()
{
 int qtdf;
 
 cout << "Digite a quantidade de funcionarios" << endl;
 cin >> qtdf;

cout << ImprimeMaiorSalario(qtdf) << endl;



 
return 0;
}
