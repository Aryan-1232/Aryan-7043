/*An operator overloading allows custom behavior to be defined for built-in operators like addition (+),
subtraction (-), when we used with user-defined types. When overloading binary operators as friend
functions, external functions can access private members of a class. Provide examples how binary operator
overloading is implemented using friend functions.*/

#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(const Complex& c1, const Complex& c2) {
    double real_sum = c1.real + c2.real;
    double imag_sum = c1.imag + c2.imag;
    return Complex(real_sum, imag_sum);
}

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.2, 4.3);

    Complex sum = c1 + c2;

    cout << "Sum: ";
    sum.display();

    return 0;
}
