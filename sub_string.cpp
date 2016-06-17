#include <iostream>
using namespace std;

int main(){
  const string hexdigits = "0123456789ABCDEF";
  string result;
  unsigned int n;

  cout << "Enter a number (0-15)" << endl;
  cin >> n;
  if(n < hexdigits.size()){
    result += hexdigits[n];
  }

  cout << "Your hex number is:" << result << endl;
}
