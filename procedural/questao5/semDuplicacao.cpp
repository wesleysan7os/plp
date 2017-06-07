#include <iostream>

using namespace std;

int main()
{
   int tamanhoArray, numeroSerInserido, aux = 0;
   bool numeroJaExiste = false;

   cin >> tamanhoArray;

   int array[tamanhoArray] = {0};

   for (int i = 0; i < tamanhoArray; i++)
   {
      numeroJaExiste = false;

      cin >> numeroSerInserido;
      
      for (int j = 0; j < aux; j++)
      {
         if (array[j] == numeroSerInserido)    
            numeroJaExiste = true;
      }

      if (!numeroJaExiste)
      {
         array[aux++] = numeroSerInserido;
      }
   }

   for (int i = 0; i < aux; i++)
   {
      cout << array[i] << " ";
   }

   return 0;
}
