#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string menorcaractere;
	int i;
	int tamanho;
	int menor = 0;
	for (int i = 0; i < 5; i++)
	{
		char palavra[1000000];
		cout << "Digite uma palavra: ";
		cin >> palavra;
		tamanho = strlen(palavra);
	
		if (tamanho < menor || i==0 )
		{
			menor = tamanho;
			menorcaractere = palavra;
		}
	}
	cout << "A menor string tem " << menor << " caractere(s)" << endl;
	cout << "A menor string eh: " << menorcaractere << endl;
	return 0;
}

