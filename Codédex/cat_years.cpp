#include <iostream>

int main() {
  int age;
  int human;
  std::cout << "Welcome to the Cat Years program! This only works for cats older than 2 years old\n";
  std::cout << "Enter your cat's age: ";
  std::cin >> age;
  
  human = (age - 2) * 4 + 24;

  std::cout << "Your cat is " << human << " years old in human years.";
}