#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
  string s("josdem is a software developer, is a DJ");

  string::size_type pos = s.find("software");
  assert(pos == 12);

  pos = s.rfind("is");
  assert(pos == 32);

  pos = s.find_first_of('i');
  assert(pos == 7);

  pos = s.find_last_of('i');
  assert(pos == 32);

  cout << pos << endl;

  return 0;
}
