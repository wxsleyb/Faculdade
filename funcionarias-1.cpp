#include <iostream>
#include <math.h>

using namespace std;


int main ()
{
   
 int funcionariosTotal, matricula, sexo, contFuncionarias = 0, soma;
 float salario = 0;

 cout << "Digite a quantidade de funcionarios" << endl;
 cin >> funcionariosTotal;

 for (int n=0; n<funcionariosTotal ; n++)
 {

   cout << "Digite a matricula" <<endl;
   cin >> matricula;

   cout << "Digite seu sexo (1- feminino e 2- masculino)" << endl;
   cin >> sexo;

   
   if (sexo==1){ 
     contFuncionarias++; // ou funcionaria + 1, é um acumulador
    }

   cout << "Digite seu salario" << endl;
   cin >> salario;

 }


  
   cout << "O numero de funcionarias eh:" << contFuncionarias << endl;
   

}