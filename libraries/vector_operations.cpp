#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

int main()
{
  vector<int> v = {1,2,3,4,5};
  vector<int>::iterator p = v.begin();

  v.insert(p+2,8);

  for(int &item: v)
  {
    cout << item << endl;
  }

  return 0;
}
