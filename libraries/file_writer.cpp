#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream file;
  file.open("some_file.txt");
  file << "This is a new line \n";
  file.close();
  return 0;
}

