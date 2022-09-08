#include <cmath>
#include <iostream>

int main() {

  int userInt;

  std::cout << "Please enter a integer: ";
  std::cin >> userInt;

  while (100 <= userInt || userInt <= 0) {
    std::cout << "Please re-enter: ";
    std::cin >> userInt;
  }

  std::cout << "Number squared is " << pow(userInt, 2) << "\n";

  return 0;
}