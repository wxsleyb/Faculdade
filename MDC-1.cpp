#include <iostream>
#include <math.h>

using namespace std;

int mdc(int a, int b)
{
 int resto;
 resto= a % b;

  while (resto != 0)
    { 
        a = b;
        b = resto;
        resto= a % b; 
    }
  return b;
}




int main()
{



cout << mdc(2, 6) << endl;

}




