#include <iostream>
using namespace std;

int main() {
  int tamC1 = 4;          //tamanho que o conjunto 1 suporta/tem de elementos
  int tamC2 = 5;          //tamanho que o conjunto 2 suporta/tem de elementos
  int contadorIntersecao= 0;          
  int contadorDiferenca = 0; 
  int C1[] = {2,4,5,8};       //elementos conjunto 1
  int C2[] = {4,5,6,7,9};      //elementos conjunto 2
  int intersecao[10];        // vetor dos elementos que estão na interseção dos dois conjuntos
  int diferenca[tamC1 + tamC2];    // vetor que vai exibir a diferença entre os dois conjuntos
  bool saoDiferentes = true;         //condição pra indicar se são diferentes com true e que não são diferentes com false

  for(int i = 0; i < tamC1; i++){
    for(int j = 0; j < tamC2; j++){

      if(C1[i] == C2[j]){                          //for aninhado para ver se existe um elemento que esteja no conjunto 1 e conjunto 2 e adicionar a variavel interseção
        intersecao[contadorIntersecao] = C1[i];
        contadorIntersecao++; 
      }
    }
  }

  for(int i = 0; i < tamC1; i++){ 
    for(int j = 0; j < contadorIntersecao; j++){   //for aninhado para comparar os elementos do conjunto 1 com a variavel interseção

      if(C1[i] == intersecao[j]){                  // caso o elemento do conjunto 1 não seja diferente em relação ao do vetor interseção, declarar que false
        saoDiferentes = false;
      }
    }

    if(saoDiferentes == true){                   // caso o elemento do conjunto 2 seja diferente em relação ao do vetor interseção, declarar que true
      diferenca[contadorDiferenca] = C1[i];      
      contadorDiferenca++;
    }

    saoDiferentes = true;
  }

  for(int i = 0; i < tamC2; i++){ 
    for(int j = 0; j < contadorIntersecao; j++){   //for aninhado para comparar os elementos do conjunto 2 com a variavel interseção


      if(C2[i] == intersecao[j]) {               // caso o elemento do conjunto 2 não seja diferente em relação ao do vetor interseção, declarar que false
        saoDiferentes = false;
      }
    }

    if(saoDiferentes == true){                 // caso o elemento do conjunto 2 seja diferente em relação ao do vetor interseção, declarar que true
      diferenca[contadorDiferenca] = C2[i]; 
      contadorDiferenca++; 
    }
    saoDiferentes = true;
  }

  //Imprime a diferença
  cout << "\nA diferenca entre os dois conjuntos eh: ";    // percorrer todo o vetor com os elementos que são a diferença para exibi-los
  for(int i = 0; i < contadorDiferenca; i++){
    cout << diferenca[i] << " ";
  }

}