#include <iostream>
using namespace std;

class Shape {
protected:
   int length;
    int width;

public:

    Shape(int l = 0.0, int w = 0.0) : length(l), width(w) {}


   int getLength()  {
        return length;
    }

   int getWidth(){
        return width;
    }

    virtual int getPerimeter() ;
};


class Rectangle : public Shape {
public:

    Rectangle(int l, int w) : Shape(l, w) {}

   int getPerimeter()  {
        return 2 * (length + width);
    }
};


class Square : public Shape {
public:

    Square(int side) : Shape(side, side) {}

    int getPerimeter()  {
        return 4 * length;
    }

    friend int circlePerimeter(const Square &s);
};

 int circlePerimeter(const Square &s) {
   int radius = s.length / 2.0;
    return 2 * M_PI * radius;
}

int main() {
    Rectangle rect(10.0, 5.0);
    Square sq(4.0);


   cout << "Rectangle Perimeter: " << rect.getPerimeter() << endl;
   cout << "Square Perimeter: " << sq.getPerimeter() << endl;


    cout << "Circle Perimeter (using Square's side as diameter): " << circlePerimeter(sq) << endl;

    return 0;
}

