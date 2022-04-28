#include <iostream>
#include <string.h>

using namespace std;

void falar(string a)
{
    cout << "a palavra eh: " << a << endl;
}

int main()
{
    string palavra;
    cout << "Digite a palavra" << endl;
    cin >> palavra;
    falar(palavra);

    return 0;
}