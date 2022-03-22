#include <iostream> //incluye utilidades para imprimir pantalla
#include <cmath>
int main (void)
{
  std::cout <<"Gabriel Leon \n" << "Suma de los inversos impares entre 10 y 100\n";
  double result = 0;
  int N = 45;
  int n = 0;
  for( n = 1; n <= N   ; n = n+1    ) {
    result = (result + 1.0/(2*n+9));
  }  
  std::cout<<"Resultado="<< result << "\n";
  return 0;
 
} 
