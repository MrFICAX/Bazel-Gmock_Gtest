#include <iostream>
#include "src/lib/matematika.h"
//#include "src/lib/algoritmi.h"

int main() {
  Matematika m;
  int array[] = {1, 8, 3};
  std::cout << m.saberi(2,3) << std::endl;
  std::cout << m.oduzmi(3,2) << std::endl;
  std::cout << m.mnozi(2,3) << std::endl;  
  std::cout << m.deli(6,2) << std::endl;
  // std::cout << nadji_medijanu(array, 3) << std::endl;

  return 0;
}

