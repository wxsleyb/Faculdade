#include <iostream>

using namespace std;

int m[10][10] = { 
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
int main()
{
int triangular=1;
for (int i=0; i<3; i++)
{
    for (int j=0; j<3; j++)
    {
       if(i<j)
       {
           m[i][j] = 0;
       } else{
           m[i][j] = m[i][j];
       }
    if (m[i][j] = 0)
{
    cout << "Acima da diagonal eh triangular" << endl;
} else {
  cout << "Acima da diagonal nao eh triangular" << endl;
}
    }
}
for (int i=0; i<3; i++)
{
    for (int j=0; j<3; j++)
    {
       cout << m[i][j] << " ";
    } cout << endl;
}



 for (int i=0; i<3; i++)
{
    for (int j=0; j<3; j++)
    {
       if(m[i][j] == 0)
       {
         triangular = 0;
      } else{
          triangular = 1;
      }
    }
}
if (triangular==0)
{
    cout << "Embaixo da diagonal nao eh triangular" << endl;
} else {
    cout << "Embaixo da diagonal eh triangular" << endl;
}

}