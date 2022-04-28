#include <iostream>
using namespace std;

struct pessoa
{
    string nome;
    string endereco;
    string profissao;
    int idade;
    float peso;
};

struct Turma
{
    string nome;
    pessoa professor;
    pessoa alunos[50];
};

struct Escola
{
    string nome;
    Turma turmas[100];
};

int main()
{
    pessoa p;

    getline(cin, p.nome);
    while (p.nome != "FIM")
    {
        getline(cin, p.endereco);
        cin>> p.idade;
        cin>> p.peso;
        getline(cin, p.profissao);
        if(p.idade > 36)
        {
            cout << "-----------" << endl;
            cout << p.nome << endl;
            cout << p.profissao << endl;
            cout << "-----------" << endl;
        }
        getline(cin, p.nome);
    }
    return 0;

}
