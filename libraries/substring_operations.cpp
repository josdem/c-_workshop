#include <iostream>
#include <assert.h>

using namespace std;

int main()
{
  string s("josdem");
  string s1 = s.substr(0,3);
  string s2 = s.substr(3);
  string s3 = s.substr(3,5);

  assert(s1=="jos");
  assert(s2=="dem");
  assert(s3=="dem");

  try{
    string s4 = s.substr(12);
  }catch(const out_of_range ex){
    cout << "Out of Range error: " << ex.what() << endl;
  }

  return 0;
}
