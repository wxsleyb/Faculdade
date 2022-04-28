#include <iostream>
#include <math.h>

using namespace std;

void valor_garcom (float PagamentoCliente){
 float gorjetagarcom, ValorPraPagar;
 gorjetagarcom = (PagamentoCliente) * 10/100;
 ValorPraPagar = PagamentoCliente + gorjetagarcom;
 cout << "O valor a ser pago eh:" << ValorPraPagar << endl;

}

int main (){ 

float PagamentoCliente;

cout << "Quanto o cliente vai pagar" << endl;
cin >> PagamentoCliente;

valor_garcom (PagamentoCliente);

return 0;

}