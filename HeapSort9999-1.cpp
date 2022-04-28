#define T 7
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}


void descer(int A[], int h, int g){
    int r =  2*h+1;       // se array iniciar com 0, d=2*1+2
    int l = 2*h;          // se array iniciar com 0, e= 2*i+1

    int maior=h;
    // verificar se tem filhos e comparar com d(direita) e e(esquerda)

    if(r<=g && A[r]>A[h]){
        maior=r;
    }
    if (l<=g && A[l]>A[maior]){
        maior=l;
    }
    if(maior!=h)
    {
        //trocar com o maior dos filhos e chamar a função novamente 
        swap(&A[h],&A[maior]);
        descer(A, maior, g);
    }
}

void heap(int V[], int m) {

    for (int i = (m/2); i >= 0;i--) {
        descer(V, i, m - 1);
    }
}

void heapsort(int V[], int t) {
    int i;
    heap(V, T);
    for (i = t - 1;i >= 1;i--) {
        swap(&V[0], &V[i]);
        descer(V, 0, i - 1);
    }
}

int main()
{
    int V[T] = {35,18,30,2,27,50,10};
    int i;
    heapsort(V, T);
    for (i = 0;i < T;i++) {
        cout << "Os numeros sao: " << V[i] << endl;
    }

}