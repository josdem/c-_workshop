#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> names = {"josdem","eric","mario"};
  vector<string> copy(names);

  for(string &item: copy)
  {
    cout << item << endl;
  }
  return 0;
}
