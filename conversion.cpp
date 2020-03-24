#include <iostream>
#include <cmath>
int main (void)
{
  double millas=0;
  std::cout << "Hola, ingrese millas\n";
  std::cin  >> millas;
  std::cout << "Eso en kilometros sería:\n";
  std::cout <<millas*1.609<< "\n";
  return 0;
}
