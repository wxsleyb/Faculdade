#include <iostream> 

  

#define N 3 

  

int main() 

{ 

    int n, i; 

    std::cin >> n; 

    int vet[n]; 

    for(i=0; i<n; i++) 

    { 

        std::cin >> vet[i]; 

    } 

    for(i=0; i<n; i++) 

    { 

        std::cout << vet[i]; 

    } 

} 