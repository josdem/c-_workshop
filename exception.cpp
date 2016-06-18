#include <iostream>
using namespace std;

class BusinessException : public exception {

  public: virtual const char* what() const throw()
  {
    return "Business Exception";
  }

};

void throwAnException(){
  throw BusinessException();
}

int main(){

  try {
    throwAnException();
  } catch(BusinessException &rte){
    cout << rte.what() << endl;
  }

}
