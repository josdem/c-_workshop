#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
  const char *cp = "josdem";

  string s1=cp;
  string s2(cp);
  assert(cp == s1);
  assert(cp == s2);

  string s3(cp+3,3);
  assert(s3 == "dem");

  string s4(cp,2,2);
  assert(s4 == "sd");

  string s5(cp,3);
  assert(s5 == "jos");

  return 0;
}
