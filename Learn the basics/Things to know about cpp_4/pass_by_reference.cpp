#include <iostream>
using namespace std;

// '&' means a is REFERENCE to original variable x
void modify(int &a) {
    // 'a' is a reference to x
    // This changes the original variable x in main
    a = a + 10; // Modify the original variable
    cout << "Inside modify function: " << a << endl; // Print the modified value
}
int main() {
    int x = 5; // Original variable
    cout << "Before modify function: " << x << endl; // Print original value
    modify(x); // Call the function with x
    cout << "After modify function: " << x << endl; // Print modified value
    // cout << a << endl;
    // The above line is commented out because 'a' is not accessible in main
    return 0;
}