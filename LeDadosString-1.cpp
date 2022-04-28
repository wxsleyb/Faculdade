#include <iostream>

using namespace std;

int main()
{
    string nome, endereco, profissao;
    int idade;
    float peso;

    getline(cin, nome);
    while(nome!= "FIM")
    {
        getline(cin,endereco);
        cin>>idade;
        cin>>peso;
        getline(cin,profissao);
        if (idade<36)
        {
            cout << "-----------" << endl;
            cout << nome << endl;
            cout << profissao << endl;
            cout << "-----------" << endl;
        } else{
            cout << "-----------" << endl;
            cout << "Nao esta nos requisitos" << endl;
            cout << "-----------" << endl;
        }
        cout << endl;
        getline(cin,nome);
    }
    return 0;
}
