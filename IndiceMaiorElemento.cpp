#include <stdio.h> 

#include <math.h> 

#include <iostream> 

#define N 6 

  

// Faça uma função que receba como parâmetro um vetor de números reais e a quantidade de números  

// armazenados no vetor. Esta função deverá retornar o maior número armazenado no vetor 

  

// 10.5 20.3 30 20 15  15 <--- Valores (conteudo das celulas) 

// 0     1    2  3  4  5 <--- Inidices (Posicao) 

  

int indiceMaiorValor(float vet[], int qtd){ 

    int maiorIndice = 0; 

    for(int i = 0; i < qtd; i++){ 

        if(i == 0 || vet[i] > vet[maiorIndice]){ 

            maiorIndice = i; 

        } 

    } 

    return maiorIndice; 

} 

  

int main(){ 

    float vet[N]; 

     

    for(int i = 0; i < N; i++){ 

        std::cin >> vet[i]; 

    } 

     

    std::cout << indiceMaiorValor(vet, N) << std::endl; 

    return 0; 

} 




{
    int referencial = -1;
    int x;
    for (int h=0; h<100; h++){
     cout << "Numero a ser procurado: ";
     cin>> x;
    }
  {
  while (fim - inicio > 0){
    int meio = inicio + (fim - inicio)/2;

    if (A[meio] == x){
      return meio;
    } else if (A[meio] > x){
      fim= meio;
    } else if (A[meio] < x){
      inicio = meio + 1;
    }
  }

  if (A[fim] == x){
    return fim;
  }
  return -1;
} 
}
