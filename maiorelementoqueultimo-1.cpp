#include <iostream> 

#define N 5 

  

float selecionaMaiorElemento(float vet[], int qt) 

{ 

    int i; 

    float maior = vet[0]; 

    for(i = 1; i < qt; i++) 

    { 

        if(vet[i] > maior) 

        { 

            maior = vet[i]; 

        } 

    } 

    return maior; 

} 

  

int main() 

{ 

    int i; 

    float vet [N]; 

    for (i = 0; i < N; i++)  

    { 

        std::cin >> vet[i]; 

    } 

    std::cout << "O maior elemento: "; 

    std::cout << selecionaMaiorElemento(vet, N) << std::endl; 

    return 0; 

} 