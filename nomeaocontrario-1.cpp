#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string nome;
    int idade;
    int i;

    cout << "Entre com o nome: ";
    getline(cin,nome);
    
    cout << "Entre com a idade: ";
    cin >> idade;
    
    cout << nome << " tem " << idade << " anos" << endl;
    cout << "As letras do nome sao:" << endl;

    //for (i=0; i<nome.size(); i++){
    //   cout << nome[i] << endl;
    //}

    for (i=nome.size()-1; i>=0; i--){
        cout << nome[i];
    }
    cout << endl;
    return 0;

    
}
    