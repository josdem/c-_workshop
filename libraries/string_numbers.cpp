#include <iostream>
#include <assert.h>

using namespace std;

int main()
{

  int i = 36;
  string s = to_string(i);
  assert(s == "36");

  double d = stod(s);
  assert(d == 36);

  string number = "7055 is my number";
  int n = stoi(number);
  assert(7055 == n);

  number = "525516827055 is my number";
  long l = stol(number);
  assert(5516827055 == l);

  return 0;
}
