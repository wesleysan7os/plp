#include <iostream>
#include <math.h>
using namespace std;

int calculaMaximoFuncao (int x, int y)
{
   return pow (x,2) - 3 * y + x;
}

int main () 
{
   int m, n, o, p, x, y, maximoAbsoluto, valorDoPar = 0;
   
   cin >> m >> n >> o >> p;
   
   for (int i = m; i <= n; i++)
   {
	for (int j = o; j <= p; j++)
	   {
		valorDoPar = calculaMaximoFuncao(i,j);
		
		if (valorDoPar > maximoAbsoluto) 
		{
		   maximoAbsoluto = valorDoPar;
		   x = i;
		   y = j;
		}
 	   }
   }

   cout << "(" << x << "," << y << ")" << endl;
   cout << maximoAbsoluto;

   return 0;
}
