#include <iostream>
#include <string>
using namespace std;

int main() 
{
   int indicesDaSenha[4];
   string palavrasDaSenha[4];
   string senha = "";
   
   for(int i = 0; i < 4; i++) 
   {
      cin >> indicesDaSenha[i];
   }

   for(int i = 0; i < 4; i++) 
   {
      cin >> palavrasDaSenha[i];
   }

   for(int i = 0; i < 4; i++)
   {
	senha += palavrasDaSenha[i][indicesDaSenha[i]];
   }

   cout << senha;

   return 0;
}
