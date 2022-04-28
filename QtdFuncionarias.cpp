#include <iostream>
#include <math.h>
using namespace std;

void CalcFuncionarias (int qtdf)
{
 float salario;
 int matricula, sexo, contfuncionarias = 0;
 for (int n=0; n<qtdf; n++)
    {
     cout << "Digite a matricula" << endl;
     cin >> matricula;
     cout << "Digite o sexo (1= feminino, 2=masculino)" << endl;
     cin >> sexo;

     if (sexo==1)
     { 
     contfuncionarias++;
     }
    cout << "Digite o salario" << endl;
     cin >> salario;
    }
    cout << "A quantidade de funcionarias eh: " << contfuncionarias << endl;


}

int main()
{
 int qtdf;
 
 cout << "Digite a quantidade de funcionarios" << endl;
 cin >> qtdf;

 CalcFuncionarias (qtdf);
}
