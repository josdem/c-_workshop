#include <iostream>
using namespace std;

void reset(unsigned int parameter){
  cout << "reseting value" << endl;
  parameter = 0;
}

int main(){
  unsigned int i = 40;
  cout << "address i: " << &i << endl;
  cout << "value i: " << i << endl;
  reset(i);
  cout << "value i: " << i << endl;
  cout << "address i: " << &i << endl;
}
