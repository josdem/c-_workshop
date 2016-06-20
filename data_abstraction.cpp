#include <iostream>
using namespace std;

class Adder{
  public:
    void addNum(int number)
    {
      total += number;
    }
    int getTotal()
    {
      return total;
    };
  private:
    int total = 0;
};
int main( )
{
  Adder adder;

  adder.addNum(10);
  adder.addNum(20);
  adder.addNum(30);

  cout << "Total " << adder.getTotal() << endl;
  return 0;
}
