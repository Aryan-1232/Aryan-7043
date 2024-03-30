/*A pointer is a variable that stores the memory address of another variable. It allows indirect access to the
value stored in that memory location. Pointers are powerful tools in C++ programming and are used for
various purposes, such as dynamic memory allocation, passing parameters to functions by reference.
Write a program to accept 3 integers and find maximum among 3 numbers using functions and pointers.
Function Specification:
int maximum (int *a,int *b, int *c)
This function returns the maximum among 3 numbers.*/

#include <iostream>
using namespace std;

int maximum(int *a, int *b, int *c) {
    int max = *a;

    if (*b > max)
        max = *b;
    if (*c > max)
        max = *c;

    return max;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int maxNum = maximum(&num1, &num2, &num3);

    cout << "Maximum number among the three integers is: " << maxNum << endl;

    return 0;
}
