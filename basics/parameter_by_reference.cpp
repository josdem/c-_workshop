#include <iostream>
using namespace std;

void reset(unsigned int &reference){
  cout << "reseting value" << endl;
  reference = 0;
}

int main(){
  unsigned int i = 40;
  cout << "address i: " << &i << endl;
  cout << "value i: " << i << endl;
  reset(i);
  cout << "value i: " << i << endl;
  cout << "address i: " << &i << endl;
}
