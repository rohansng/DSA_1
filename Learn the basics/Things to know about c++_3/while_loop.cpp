#include <iostream>
using namespace std;

int main() {

    // Number whose factorial we want to calculate
    int n = 5;

    // Factorial starts from 1 because multiplication by 1
    // does not change the result
    int factorial = 1;

    // The loop runs as long as n is greater than 0
    while (n > 0) {

        // Multiply factorial by the current value of n
        factorial = factorial * n;

        // Decrease n by 1
        // This moves us towards the stopping condition
        n--;
    }

    // Display the final factorial
    cout << "Factorial of 5 is: " << factorial << endl;

    return 0;
}