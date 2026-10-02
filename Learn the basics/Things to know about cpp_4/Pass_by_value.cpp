// Pass by value example in C++

#include <iostream>
using namespace std;

// 'a' is passed by value, so the original variable will not be modified
void modify(int a) {
    // 'a' is a copy of x
    a = a + 10; // Modify the copy
    cout << "Inside modify function: " << a << endl; // Print the modified value
}
int main() {
    int x = 5; // Original variable
    cout << "Before modify function: " << x << endl; // Print original value
    modify(x); // Call the function with x
    cout << "After modify function: " << x << endl; // Print original value again
    // cout << "changed: " << a << endl;
    // The above line is commented out because 'a' is not accessible in main
    return 0;
}