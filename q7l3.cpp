#include <iostream>
#define MAXCLI 100

using namespace std;

struct Conta
{
    int numero;
    float saldo;
};

void exibe(Conta contas[], int n, float saldoMedio)
{
    for (int i=0; i<n; i++)
    {
        cout << contas[i].numero << " " << contas[i].saldo;
        if (contas[i].saldo > saldoMedio)
        {
            cout << " Acima da media" << endl;
        } 
        else 
        {
           if (contas[i].saldo < saldoMedio)
           {
        
            cout << " Abaixo da media" << endl;
        }
         else
        {
          cout << " Esta na media" << endl;
        }
    }
}

}
int main()
{
    Conta contas[MAXCLI];
    int n=0;
    float somaSaldo=0;

    cin >> contas[n].numero;
    while (contas[n].numero != 0)
    {
        cin >> contas[n].saldo;
        somaSaldo += contas[n].saldo;
        n++;
        cin >> contas[n].numero;
    }
    cout << "Agora eu tenho" << n << "contas" << endl;
   cout << "Saldo medio" << (somaSaldo/n) << endl;


   exibe(contas, n, somaSaldo/n);
}