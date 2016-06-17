#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> integers = {1,2,3,4,5};

  for(int i=6; i < 10; i++){
    integers.push_back(i);
  }

  for(int i: integers){
    cout << i << endl;
  }

}
