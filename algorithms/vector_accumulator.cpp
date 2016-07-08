#include <iostream>
#include <vector>
#include <assert.h>
#include <algorithm>

using namespace std;

int main()
{

  vector<int> numbers = {2,12,18,36,40,58};
  int sum = accumulate(numbers.cbegin(), numbers.cend(), 0);
  assert(sum == 166);

}
