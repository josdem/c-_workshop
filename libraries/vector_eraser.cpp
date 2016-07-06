#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

int main()
{
  vector<int> v = {1,2,3,4,5};
  vector<int>::iterator p = v.begin();

  v.erase(p+2);

  for(int &item: v)
  {
    cout << item << endl;
  }

  return 0;
}
