//Define constructor. Create a Number class. Include one constructure to initialize the data members of
//class. Also add the function to convert a decimal number into binary number.

#include <iostream>
using namespace std;

class Number {
private:
    int decimal;

public:
    Number(int dec) {
        decimal = dec;
    }

    void decimalToBinary() {
        int binary[32];
        int num = decimal;
        int i = 0;

        if (num == 0)
            binary[i++] = 0;
        else {
            while (num > 0) {
                binary[i++] = num % 2;
                num /= 2;
            }
        }

        cout << "Binary representation: ";
        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
        cout << endl;
    }
};

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    Number num(decimalNumber);

    num.decimalToBinary();

    return 0;
}
