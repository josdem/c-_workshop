#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

  vector<int> numbers = {2,12,18,36,40,58};
  fill(numbers.begin(), numbers.begin() + numbers.size()/2, 0);

  for(int it: numbers){
    cout << it << endl;
  }

}
