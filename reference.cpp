#include <iostream>

int main()
{
  int number = 1024;
  int &reference = number;

  std::cout << reference << std::endl;
}
