#include <iostream>

using namespace std;

int main(){
  int integers[10] = {0,1,2,3,4};

  for(int i=5; i < 10; i++){
    integers[i] = i;
  }

  for(int i: integers){
    cout << i << endl;
  }

}
