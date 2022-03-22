#include <iostream> //incluye utilidades para imprimir pantalla
#include <cmath>
int main (void)
{
  std::cout <<"Gabriel Leon \n" << "El valor de pi haciendo uso de la sumatoria 1/n^2 con n=1 a n=10000 es:\n";
  double result = 0;
  int N = 45;
  int n = 0;
  for( n = 1; n <= N   ; n = n+1    ) {
    result = (result + 1.0/(2*n+9));
  }  
  std::cout<< result << "\n";
  return 0;
 
} 
