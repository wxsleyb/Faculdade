#include <iostream>
#include <math.h>

using namespace std;

calculaQuantidadeCedula(int quantia)
{
int c100, c50, c20, c10, c5, c2, m1;

c100 = quantia/100;
quantia =  quantia % 100;
c50 = quantia /50;
quantia = quantia % 50;
c20 = quantia /20;
quantia = quantia % 20;
c10 = quantia /10;
quantia = quantia % 10;
c5 = quantia /5;
quantia = quantia % 5;
c2= quantia/2;
quantia = quantia % 2;
m1 = quantia/1;
quantia = quantia % 1;



cout << "A quantidade de nota(s) de 100 eh: " << c100 << " nota(s) de 100 reais" << endl;
cout << "A quantidade de nota(s) de 50 eh: " << c50 << " nota(s) de 50 reais" << endl;
cout << "A quantidade de nota(s) de 20 eh: " << c20 << " nota(s) de 20 reais" << endl;
cout << "A quantidade de nota(s) de 10 eh: " << c10 << " nota(s) de 10 reais" << endl;
cout << "A quantidade de nota(s) de 5 eh: " << c5 << " nota(s) de 5 reais" << endl;
cout << "A quantidade de nota(s) de 2 eh: " << c2 << " nota(s) de 2 reais" <<endl;
cout << "A quantidade de moeda(s) de 1 eh: " << m1 << " moeda(s) de 1 real" <<endl;

return 0;

}

int main()
{ 
int quantia;

cout << "Digite a quantia" << endl;
cin >> quantia;

calculaQuantidadeCedula (quantia);


}
