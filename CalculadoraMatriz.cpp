#include <iostream>
using namespace std;
void le(int A[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
}

void imprime(int A[][3])
{
    int i, j;
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
void multiplica(int A[][3], int B[][3], int C[][3])
{
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void soma(int A[][3], int B[][3], int C[][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()                 //somatorio= A[i][k] * B[k][j]
                           // for (k=0; k<n; k++)
                           //soma+=
{
    int A[3][3]= {
        {1, 2, 3},
        {1, 1, 2},
        {3, 2, 1}
    };
    int B[3][3]{
        {2, 3, 4},
        {1, 1, 0},
        {1, 2, 3}
    };

    int C[3][3]{

    };
    imprime(A);
    imprime(B);
    //multiplica(A, B, C);
    //imprime(C);
    soma(A, B, C);
    //le(C);
    imprime(C);

 return 0;
    
}
