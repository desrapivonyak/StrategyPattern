#include <iostream>
#include "SearchContext.hpp"

int main() {
  ISearch* obj = new LinearSearch();
  obj->search();

  obj = new BinarySearch();
  obj->search();

  delete obj;
  return 0;
}