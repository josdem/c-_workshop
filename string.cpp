#include <iostream>
using namespace std;

int main(){
  string nickname = "josdem";

  for(char &c: nickname){
    c = toupper(c);
  }

  cout << nickname << endl;
}
