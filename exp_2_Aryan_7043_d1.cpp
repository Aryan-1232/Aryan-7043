// Take a input from user with a positive integer. Write a function to compute the sum of series where n is input
// by the user in the main function. Find sum of series where i-th term is sum of first i natural numbers.
// Input : n = 5
// Output : 35
// Explanation : (1) + (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4+5) = 35

#include <iostream>

class cal_sum_of_series {
private:
    int n;

public:
    cal_sum_of_series(int num) {
        n = num;
    }

    int sum() {
        int k = 0;
        int m = 0;
        
        for (int i = 1; i <= n; i++) {
            m += i;
            k += m;
        }
        
        return k;
    }
};

int main() {
    int n;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }
    
    cal_sum_of_series ob1(n);
    std::cout << "Sum of series is  " << ob1.sum() << std::endl;
    
    return 0;
}
