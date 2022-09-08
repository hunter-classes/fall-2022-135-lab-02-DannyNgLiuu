#include <iostream>
#include "funcs.h"

void print_interval(int L, int U) {
  while(L < U) {
  std::cout << L << " ";
  L++;
  }
}