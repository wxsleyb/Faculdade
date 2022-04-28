#include <iostream> 

using namespace std; 

void maiorDivisor(int n)  

 
 

{  

 
 

    int divisor=0;  

 
 

    for (int i=10; i<=n; i++)  

 
 

    {  

 
 

      int divisor=0;  

 
 

          for (int j=2; j<=i/2; j++)  

 
 

           {  

 
 

               if (i%j ==0)  

 
 

                {  

 
 

                  divisor++;  

 
 

                }  

 
 

            }  

 
 

            if (divisor < 1)  

 
 

            {  

 
 

             cout << i << " " << endl;  

 
 

            }  

 
 

    }  

 
 

}    

 
 

int main()  

 
 

{  

 
 

    int numero;  

 
 

    numero=10000;  

 
 

  

maiorDivisor(numero);  

 
 

  

 
 

return 0;  

 
 

  

 
 

} 

