#include <iostream>

using namespace std;

int main()
{
    string nome;

    cout << "Entre com o nome" << endl;
    getline(cin,nome);

    for (int i=nome.size()-1; i>=0; i--)
    {
        cout << nome[i];
    }
}