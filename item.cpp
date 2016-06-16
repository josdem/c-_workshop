#include <iostream>
using namespace std;

struct Item {
  string name;
  unsigned quantity;
  double price;
};

int main(){
  Item item;

  cout << "Item name: " << endl;
  cin >> item.name;
  cout << "Quantity: " << endl;
  cin >> item.quantity;
  cout << "Price: " << endl;
  cin >> item.price;
  cout << "Total: " << item.quantity * item.price << endl;

  return 0;
}


