#include <iostream>
using namespace std;

bool ehPrimo (int primo)
{
   int qntdDivisoes = 0;
   bool ehPrimo = false;

   if (primo > 0) 
   {
      for (int i = 1; i <= primo; i++) 
      {
         if (primo % i == 0) 
         {
            qntdDivisoes++;
         }
      }
      
      if (qntdDivisoes == 2)
      {
         ehPrimo = true;
      }
   }
   
   return ehPrimo;
}

int main()
{
   int numero = 0;

   cin >> numero;

   if (ehPrimo(numero))
   {
      if (ehPrimo(numero + 2))
         cout << "PRIMO CASADO!";

      else
         cout << "PRIMO!";

   } else {
         cout << "NAO PRIMO!";
   }

   return 0;
}
