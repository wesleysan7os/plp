#include <iostream>
using namespace std;

int main() {
   int temperatura, qntdTemperaturasNegativas = 0;

   do {
	cin >> temperatura;

	if(temperatura < 0) 
	   qntdTemperaturasNegativas++;
  	
   } while(temperatura != 0);			

   cout << qntdTemperaturasNegativas;
	
   return 0;	
}

