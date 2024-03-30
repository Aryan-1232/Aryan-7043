// Classes are mainly used for wrapping a data and functions into a single unit. These are the main feature of
// object-oriented programming. Whenever we need to encapsulate the data and the logic for processing the
// data. To maintain clarity, you decide to define member functions outside the class declaration. Explain how
// you would use the scope resolution operator to define the functions outside the class and ensure proper
// linkage with the help of c++ programming example.

#include <iostream>
using namespace std;

class aryan {
private:
    int n;

public:
    void setNumber(int number) {
        n = number;
    }

    void display();
};

void aryan::display() {
    cout << "The entered number is : " << n << endl;
}

int main() {
    aryan obj1;
    int data ;
    cout << "Enter a Number : ";
    cin >> data ;
    obj1.setNumber(data);
    obj1.display();

    return 0;
}
