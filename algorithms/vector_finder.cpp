#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int value=36;

  int numbers[] = {2,12,18,36,40,58};
  auto result = find(begin(numbers), end(numbers) ,value);
  assert(result == 36);

}
