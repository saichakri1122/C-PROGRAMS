#include <iostream>
using namespace std;

class circle {
private:
    float radius;
    const float pi;
    static int count;

public:
    // Default constructor
    circle() : radius(0), pi(3.14159) {
        count++;
    }

    // Parameterized constructor
    circle(int r) : radius(r), pi(3.14159) {
        count++;
    }

    // Function to calculate the area of the circle
    float circArea() const {
        return pi * radius * radius;
    }

    // Function to calculate the circumference of the circle
    float circCircumference() const {
        return 2 * pi * radius;
    }

    // Static function to return the current count of objects
    static int counter() {
        return count;
    }
};

// Initialize static member
int circle::count = 0;

int main() {
    circle c1;  // Default constructor
    circle c2(5);  // Parameterized constructor

    cout << "Area of circle with default radius: " << c1.circArea() << endl;
    cout << "Circumference of circle with default radius: " << c1.circCircumference() << endl;

    cout << "Area of circle with radius 5: " << c2.circArea() << endl;
    cout << "Circumference of circle with radius 5: " << c2.circCircumference() << endl;

    cout << "Number of circle objects created: " << circle::counter() << endl;

    return 0;
}
