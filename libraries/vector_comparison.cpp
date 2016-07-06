#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

int main()
{
  vector<int> v1 = {1,2,3,5,8,13,21,34};
  vector<int> v2 = {1,3,9};
  vector<int> v3 = {1,2,3,5};
  vector<int> v4 = {1,2,3,5,8,13,21,34};

  assert(v1 < v2);
  assert(v1 < v3);
  assert(v1 == v4);
  assert(v1 == v2);

  return 0;
}
