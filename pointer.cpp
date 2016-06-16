#include <iostream>

int main()
{
  int number = 1024;
  int *pointer = &number;

  std::cout << "pointer value:" << *pointer << std::endl;
}
