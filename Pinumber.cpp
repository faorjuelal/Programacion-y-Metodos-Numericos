# include <iostream>
# include <cmath>

int main(void)
{
  double suma = 0;
  int n = 0;
  int f = 1000;
  for (n = 1; n <= f; n = n+1){
    suma = suma +1.0/(n*n);
  }
  
  std::cout << suma <<"\n";
  double Pi = sqrt(6*suma);
  std::cout << Pi <<"\n";
  return 0;
}
