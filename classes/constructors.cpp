#include <iostream>
using namespace std;

class Rectangle
{
  public:
    Rectangle(unsigned int w, unsigned int h)
    {
      width = w;
      height = h;
    }

    double getArea()
    {
      return width * height;
    }

    Rectangle& reference()
    {
      return *this;
    }

  private:
    double width;
    double height;
};

int main()
{
  Rectangle rec1(10,6);
  Rectangle rec2(10,5);
  cout << "Rectangle 1 address" << &rec1.reference() << endl;
  cout << "Rectangle 2 address" << &rec2.reference() << endl;
  return 0;
}
