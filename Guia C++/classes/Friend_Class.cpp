/**
*
*Friend functions
*In principle, private and protected members of a class cannot be accessed from outside 
*the same class in which they are declared. However, this rule does not apply to "friends".
*
*Friends are functions or classes declared with the friend keyword.
*A non-member function can access the private and protected members of a class if it is 
*declared a friend of that class. That is done by including a declaration of this external 
*function within the class, and preceding it with the keyword friend
*/

// friend class
#include <iostream>
using namespace std;

class Square;

class Rectangle {
    int width, height;
  public:
    int area ()
      {return (width * height);}
    void convert (Square a);
};

class Square {
  friend class Rectangle;
  private:
    int side;
  public:
    Square (int a) : side(a) {}
};

void Rectangle::convert (Square a) {
  width = a.side;
  height = a.side;
}
  
int main () {
  Rectangle rect;
  Square sqr (4);
  rect.convert(sqr);
  cout << rect.area();
  return 0;
}