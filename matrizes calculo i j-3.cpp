#include <iostream>

using namespace std;
void imprime(int A[][3])
{
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3 ; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
void multiplica(int A[][3], int B[][3], int C[][3])
{

}

int main()
{
    int A[3][3]= {
        {1, 2, 3},
        {1, 1, 2},
        {3, 2, 1}
    }
    int B[3][3]{
        {2, 3, 4},
        {1, 1, 0},
        {1, 2, 3}
    }

    int C[3][3];
    imprime(A);
    imprime(B);

}