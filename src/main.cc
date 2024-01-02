#include <iostream>
#include "simple.h"

int main()
{
  std::cout << "Hello, world" << std::endl;
  std::cout << "sum(10, 20) = " << simple::sum_integer(10, 20) << std::endl;
}