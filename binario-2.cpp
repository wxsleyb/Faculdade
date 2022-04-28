#include <iostream>
#include <math.h>

using namespace std;
int SomaBinario(int num1, int num2)
 {
    int result;
    result = num1+num2;

    return result;
  }



int main()
{

int num1, num2;

cout << "Digite o primeiro numero" << endl;
cin << num1;
cout << "Digite o segundo numero" << endl;
cin << num2;


SomaBinario(num1, num2);
}