#include <iostream>


class IncNum {
private:
    int value;

public:

    IncNum(int val = 0)
    value(val) {}

    friend IncNum operator++(IncNum& num);

    int getValue()
    const { return value;
     }
};


IncNum operator++(IncNum& num) {

    num.value++;

    return num;

int main() {

    IncNum num(5);


   cout << "Initial value: " << num.getValue() << endl;


    ++num;

   cout << "Updated value: " << num.getValue() << endl;

    return 0;
}
