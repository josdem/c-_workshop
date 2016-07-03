#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream infile("some_file.txt");
  ofstream outfile("copied_file.txt");
  outfile << infile.rdbuf();
  infile.close();
  outfile.close();
  return 0;
}

