// Create a class Named StringOperation, take a input of any string variable and to perform the following
// operations on strings. Note: Don’t use any of the string library functions.
//  Finding the length of the string
//  Finding the reverse of the string
//  Finding the concatenation of 2 strings
//  To compare 2 strings.
#include <iostream>
#include <string>

using namespace std;

class String_operation {
private:
    string str;

public:
    String_operation(string s) : str(s) {}

    int findLength() {
        int length = 0;
        for (char c : str) {
            length++;
        }
        return length;
    }

    string reverse() {
        string reverseStr;
        for (int i = str.length() - 1; i >= 0; i--) {
            reverseStr.push_back(str[i]);
        }
        return reverseStr;
    }

    string concatenateStrings(string other_String) {
        string concatenatedStr = str;
        for (char c : other_String) {
            concatenatedStr.push_back(c);
        }
        return concatenatedStr;
    }

    bool compareStrings(string other_String) {
        if (str.length() != other_String.length())
            return false;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != other_String[i])
                return false;
        }
        return true;
    }
};

int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    String_operation strOp(userInput);
    cout << "Length of string: " << strOp.findLength() << endl;
    cout << "Reverse of string: " << strOp.reverse() << endl;
    
    string otherString;
    cout << "Enter another string for concatenation: ";
    getline(cin, otherString);
    cout << "Concatenated string: " << strOp.concatenateStrings(otherString) << endl;

    string compareString;
    cout << "Enter a string for comparison: ";
    getline(cin, compareString);
    cout << "Comparison result: " << strOp.compareStrings(compareString) << endl;

    return 0;
}
