#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct AlunoAprovado
{
	string nome = "Bernardo";
	float p1 = 9;
	float p2 = 8;
	float media;
	string situacao;
};
struct AlunoReprovado
{
	string nome = "Renato";
	float p1 = 4.5;
	float p2 = 5;
	float media;
	string situacao;
};
int main()
{
	AlunoAprovado x;
	AlunoReprovado y;
	for (int i = 0; i < 50; i++)
	{
		cout << "\nDigite seu nome: ";
		cout << x.nome;
		cout << "\nDigite a nota da sua P1: ";
		cout << x.p1;
		cout << "\nDigite a nota da sua P2: ";
		cout << x.p2;
		x.media = (x.p1 + x.p2) / (2);

		if (x.media > 6)
		{
			cout << "\n-----------------------------" << "\n";
			cout << x.nome << " aqui esta sua media e sua situacao: \n";
			cout << "\nSua media eh: " << x.media << "\n";
			cout << x.situacao << "APROVADO" << "\n";
			cout << "\n-----------------------------" << "\n";
		}
		else if (x.media < 6)
		{
			cout << "\n-----------------------------" << "\n";
			cout << x.nome << " aqui esta sua media e sua situacao: \n";
			cout << "\nSua media eh: " << x.media << "\n";
			cout << x.situacao << "REPROVADO" << "\n";
			cout << "\n-----------------------------" << "\n";
		}


	}
	for (int i = 0; i < 50; i++)
	{
		cout << "\nDigite seu nome: ";
		cout << y.nome;
		cout << "\nDigite a nota da sua P1: ";
		cout << y.p1;
		cout << "\nDigite a nota da sua P2: ";
		cout << y.p2;
		y.media = (y.p1 + y.p2) / (2);

		if (y.media > 6)
		{
			cout << "\n-----------------------------" << "\n";
			cout << y.nome << " aqui esta sua media e sua situacao: \n";
			cout << "\nSua media eh: " << y.media << "\n";
			cout << y.situacao << "APROVADO" << "\n";
			cout << "\n-----------------------------" << "\n";
		}
		else if (y.media < 6)
		{
			cout << "\n-----------------------------" << "\n";
			cout << y.nome << " aqui esta sua media e sua situacao: \n";
			cout << "\nSua media eh: " << y.media << "\n";
			cout << y.situacao << "REPROVADO" << "\n";
			cout << "\n-----------------------------" << "\n";
		}

	}
}