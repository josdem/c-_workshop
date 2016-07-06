#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> names(10,"josdem");

  for(string &item: names)
  {
    cout << item << endl;
  }
  return 0;
}
