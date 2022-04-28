#include <iostream> 

  

using namespace std; 

  

void imprimeComuns(int v1[], int n1, int v2[], int n2) 

{  

   for (int i=0; i<n1;i++) 

   { 

       for (int j=0; j<n2; j++) 

       { 

           if (v1[i] == v2[j]) 

           { 

               cout << v2[j] << endl; 

           } 

            

        } 

    } 

} 

int main()  

{ 

    int v1[] = { 31, 59, 40, 1, 2, 5, 11, 13, 19, 100}; 

    int v2[] = { 32, 41, 50, 59, 11, 19, 2, 5, 100}; 

    imprimeComuns(v1, 10, v2, 9); 

    return 0; 

} 