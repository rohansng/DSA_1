#include <iostream>
using namespace std; 
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
}
int main() {
    int x = 5, y = 10;
    cout << "Before swap function: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap function: x = " << x << ", y = " << y << endl;
    return 0;
}

// swapping is not done
// because we are passing the value/copy of x and y to the swap function
