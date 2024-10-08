#include "Rectangle.hpp"

int main()
{
  Shape *rect = new Rectangle(5, 5);
  cout << "Rectangle Area: " << rect->getArea() << endl;

  return 0;
}