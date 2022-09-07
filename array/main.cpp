/**
 * Simple C++ main using a array-memory list class.
 * 
 */

#include "List.h"
#include <iostream>

int main() {
  List<int> list;

  std::cout << "Inserting element 3 at back:" << std::endl; 
  list.insertAtBack(3);
  std::cout << "list[0]: " << list[0] << std::endl;

  return 0;
}