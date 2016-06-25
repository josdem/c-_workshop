#include <iostream>
using namespace std;

char &get_val(string &s, unsigned int index)
{
  return s[index];
}

int main()
{
  string s = "this is a value";
  cout << s << endl;
  get_val(s,0) = 'T';
  cout << s << endl;
  return 0;
}
