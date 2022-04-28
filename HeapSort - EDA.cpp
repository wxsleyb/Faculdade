#include <iostream>

int HeapRecursivo(int v[], int inicio, int aux, int filho, int final) {
    if (filho > final) 
        return inicio;
    if (filho < final && filho + 1 < final && v[filho] < v[filho + 1]) {
        filho++;
    }    
    if (aux < v[filho]) {
        v[inicio] = v[filho];
        inicio = filho;
        filho = 2 * inicio + 1;
    }
    else {
        filho = final + 1;
    }
    return HeapRecursivo(v, inicio, aux, filho, final);
}

void Heap(int v[], int inicio, int final) {
    int aux = v[inicio];
    int filho = inicio * 2 + 1;
    inicio = HeapRecursivo(v, inicio, aux, filho, final);
    v[inicio] = aux; 
}

void heapSort1(int v[], int i, int tam) {
    if (i < 0) return;
    Heap(v, i, tam - 1);
    heapSort1(v, i - 1, tam);
}

void heapSort2(int v[], int i, int tam) {
    if (i <= 0) return;
    int aux = v[0];
    v[0] = v[i];
    v[i] = aux;
    Heap(v, 0, i - 1);
    heapSort2(v, i - 1, tam);
}

void heapSort(int v[], int tam) {
    heapSort1(v, (tam - 1) / 2, tam);
    heapSort2(v, tam - 1, tam);
}

int main(void) {
    int teste[] = { 35, 18, 30, 2, 27, 50, 10 };
    std::cout << "Usando heapsort e ordenando a sequencia: 35, 18, 30, 2, 27, 50, 10 \n";
    heapSort(teste, 6);
    for (int i = 0; i <= 5; i++) {
       std::cout << teste[i] << "\t" ;
    }
    return 0;
}
