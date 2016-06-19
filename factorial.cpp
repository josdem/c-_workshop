#include <iostream>
using namespace std;

int factorial(unsigned int value){
  unsigned int result = 1;
  while(value > 1){
    result *= value--;
  }
  return result;
}

int main(){
  cout << "Factorial 5 is: " << factorial(5) << endl;
  return 0;
}
