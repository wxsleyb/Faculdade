#include <iostream>

using namespace std;
int main()
{
    int M1[10][10] = { 
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
     int M2[10][10] = { 
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 9},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 9}
    };
    int simetrico = 1;

    for(int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(M1[i][j] != M1[j][i])
            {
               simetrico = 0; 
            }
        }
    }
    if (simetrico == 1)
    {
        cout << "M1 eh uma matriz simetrica" << endl;
    } else {
        cout << "M1 nao eh uma matriz simetrica" << endl;
    }

     for(int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(M2[i][j] != M2[j][i])
            {
               simetrico = 0; 
            }
        }
    }
    if (simetrico == 1)
    {
        cout << "M2 eh uma matriz simetrica" << endl;
    } else {
        cout << "M2 nao eh uma matriz simetrica" << endl;
    }
 return 0;
}