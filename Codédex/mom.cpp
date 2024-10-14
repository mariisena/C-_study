#include <iostream>

int main() {
  int month1;
  int month2;
  double mom;

  std::cout << "Digite o número do primeiro mês (1-12): ";
  std::cin >> month1;
   
  std::cout << "Digite o número do segundo mês (1-12): ";
  std::cin >> month2;
  
  mom = ((double)(month2 - month1) / month1) * 100;

  std::cout << mom;
}