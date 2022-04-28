#include <iostream>
#include <math.h>
using namespace std;

void CalcSalario(int qtdf)
{
 float salario;
 int matricula, sexo;
 float total = 0;

    for (int i=0; i<qtdf; i++)
    {
     cout << "Digite a matricula" << endl;
     cin >> matricula;
     cout << "Digite o sexo" << endl;
     cin >> sexo;
     cout << "Digite o salario" << endl;
     cin >> salario;
     total += salario;
    }
    cout << "A soma dos salarios eh: " << total << endl;

}


int main()
{

int qtdf;
float total;

cout << "Digite a quantidade de funcionarios" << endl;
cin >> qtdf;

CalcFuncionarias (qtdf);
CalcSalario(qtdf);



}
