#include <iostream>
using namespace std;
int main()
{
    int qt=0;

string nome;
  cout << "insira tal nome" << endl;
  getline(cin,nome);
  if (nome.size() <= 40){
  cout << "valido" << endl;
  }else {
  cout << "invalido" << endl;
  }

   for (int i=0; i<nome.size(); i++)
    {
        qt++;

    }
    cout << "A quantidade de digitos foi/foram: " << qt << endl;
}