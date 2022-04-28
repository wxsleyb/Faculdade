#include <iostream>
#include <math.h>

using namespace std;

int CalculaDVCPF(int cpf)

{
int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, dv1, dv2;

d0= cpf % 10; //18098397
cpf = cpf/10;
d1= cpf % 10; //1809839
cpf = cpf/10; // ou cpf \= 10 se a variavel antes do = for igual a depois do = "cpf=cpf/10"
d2= cpf % 10; //180983
cpf = cpf/10;
d3= cpf % 10; //18098
cpf = cpf/10;
d4= cpf % 10; //1809
cpf = cpf/10;
d5= cpf % 10; //180
cpf = cpf/10;
d6= cpf % 10; //18
cpf = cpf/10;
d7= cpf % 10; //1
cpf = cpf/10;
d8= cpf % 10; //0
cpf = cpf/10;
d9= cpf % 10; //0
cpf= cpf/10;

if (dv1==10);
{ 
  dv1= 0;
}
if (dv2 == 10);
{
  dv2=0;
}  

dv1 = ((d0*9 + d1*8 + d2*7 + d3*6 + d4*5 + d5*4 + d6*3 + d7*2 + d8*1 + d9) % 11);
dv2 = ((dv1*9 + d0*8 + d1*7 + d2*6 + d3*5 + d4*4 + d5*3 + d6*2 + d7*1 + d8*0 + d9) % 11);

cout << dv1 << dv2 << endl;


}

int validaCPF(int cpf){

int dvDigitado, cpfSemDV, dvEsperado;

dvDigitado = cpf % 100;
cpfSemDV = cpf/100;
dvEsperado = CalculaDVCPF(cpf);

if (dvEsperado == dvDigitado){          //return dvEsperado == dvDigitado;//
   return 1;
}
else {                       
   return 0;
}

}



int main()
{

int cpf;

cout << "Digite o CPF sem os dois ultimos digitos" << endl;
cin >> cpf;

if (cpf== 999999999)
{
    cout << "CPF invalido" << endl;
    return -1;
}

if (cpf== 888888888)
{
    cout << "CPF invalido" << endl;
    return -1;
}

if (cpf== 777777777)
{
    cout << "CPF invalido" << endl;
    return -1;
}

if (cpf== 666666666)
{
    cout << "CPF invalido" << endl;
    return -1;
}

if (cpf== 555555555)
{
    cout << "CPF invalido" << endl;
    return -1;
}

if (cpf== 444444444)
{
    cout << "CPF invalido" << endl;
    return -1;
}
if (cpf== 333333333)
{
    cout << "CPF invalido" << endl;
    return -1;
}
if (cpf== 222222222)
{
    cout << "CPF invalido" << endl;
    return -1;
}
if (cpf== 111111111)
{
    cout << "CPF invalido" << endl;
    return -1;
}


CalculaDVCPF(cpf);

//validaCPF(cpf);

}