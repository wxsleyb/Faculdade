#include <iostream>
using namespace std;

struct Aluno
{
    string nome;        //[2][40];
    float p1;
    float p2;
    float media;
    string situacao;        //[10];
};

int main()
{
    Aluno p;
    

    while (p.nome!= "0")
    {
        getline(cin, p.nome);
        cin>>p.p1;
        cin>>p.p2;
        p.media=(p.p1+p.p2)/(2);

        if(p.media>6)
        {
            cout << "-----------" << endl;
            cout << p.media << endl;
            cout << p.situacao << "APROVADO" << endl;
            cout << "-----------" << endl;
        } else if(p.media<6)
        {
            cout << "-----------" << endl;
            cout << p.situacao << "REPROVADO"<< endl;
            cout << "-----------" << endl;
        }
        getline(cin, p.nome);
    }
    return 0;

}