#include <iostream>
using namespace std;

struct Aluno
{
    string nome;  //[40];
    float p1;
    float p2;
    float media;
    string situacao;  //[10];
};

int main()
{
    Aluno p;

    while(p.nome != "FIM")
    {
        
        getline(cin, p.nome);
        cin>>p.p1;
        cin>>p.p2;
        p.media=(p.p1+p.p2)/(2);


        if(p.media>=6)
        {
            cout << "-----------" << endl;
            cout << p.nome << endl;
            cout << "media: " << p.media << endl;
            cout << p.situacao << "APROVADO"<< endl;
            cout << "-----------" << endl;
        } else if(p.media<6)
        {
            cout << "-----------" << endl;
            cout << p.nome << endl;
            cout << "media: " << p.media << endl;
            cout << p.situacao << "REPROVADO"<< endl;
            cout << "-----------" << endl;
        }
        getline(cin, p.nome);
    }
    return 0;

}
int main()
{
    Escola aluno;

    for(int i=0; i<3; i++)
    {
        
        cin>>aluno.nome;
        cin>>aluno.p1;
        cin>>aluno.p2;
        
        aluno.media = (aluno.p1 + aluno.p2) / 2;


        if(aluno.media>=6)
        {
            cout << "-----------" << endl;
            cout << aluno.nome << endl;
            cout << "media: " << aluno.media << endl;
            cout << aluno.situacao1 << endl;
            cout << "-----------" << endl;
        } else if(aluno.media<6)
        {
            cout << "-----------" << endl;
            cout << aluno.nome << endl;
            cout << "media: " << aluno.media << endl;
            cout << aluno.situacao2 << endl;
            cout << "-----------" << endl;
        }
    }
    return 0;

}