#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
  string s("josdem");

  s.insert(s.size(), "!");
  assert(s == "josdem!");

  s.erase(s.size()-1 , 1);
  assert(s == "josdem");

  s.replace(3,5,"e");
  assert(s == "jose");

  return 0;
}
