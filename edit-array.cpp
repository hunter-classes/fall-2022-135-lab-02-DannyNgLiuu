#include <iostream>

int main() {

  int myData[10];
  int userIndex = 0;;
  int userValue;

  for (int i = 0; i < 10; i++) {
    myData[i] = 1;
  }

  for (int i = 0; i < 10; i++) {
    std::cout << myData[i] << " ";
  }
  
  std::cout << "\n";

  while (userIndex >= 0 && userIndex < 10) {
    std::cout << "Input index: ";
    std::cin >> userIndex;
    
      while (10 <= userIndex || userIndex < 0) {
        std::cout << "Index out of range. Exit.";
        return 0;
      }
    
    std::cout << "Input value: ";
    std::cin >> userValue;

    myData[userIndex] = userValue;

    for (int i = 0; i < 10; i++) {
      std::cout << myData[i] << " ";
    }

    std::cout << "\n";
  }



  return 0;
}