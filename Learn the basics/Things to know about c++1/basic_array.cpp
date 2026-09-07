/*
An Array stores multiple values of the same data type 
in consecutive memory locations.
*/ 

#include <bits/stdc++.h>

/*#include <bits/stdc++.h> is a C++ header file that includes 
almost all commonly used C++ standard libraries at once.*/

using namespace std;
int main() {
    int arr[5];

    // store values using index
    // Array index starts from 0 to n-1, where n is the size of the array.
    arr[0] = 10;
    arr [1] = 20;
    arr [2] = 30;
    arr [3] = 40;
    arr [4] = 50;

    // Access an element using its index
    cout << arr[0] << endl; // Output: 10
    cout << arr[1] << endl; // Output: 20
    cout << arr[2] << endl; // Output: 30
    cout << arr[3] << endl; // Output: 40
    cout << arr[4] << endl; // Output: 50
    return 0;
}
