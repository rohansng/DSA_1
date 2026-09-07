#include<bits/stdc++.h>
using namespace std;

int main() {
    // create an array & initialise it
    int arr[5] = {10, 20, 30, 40, 50};
    
    int target = 30; // The value we want to search for

    //check every element of the array
    for (int i = 0; i < 5; i++) {
        // if current equals target
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;

            return 0; // Exit the program after finding the element
        }
    }

    cout << "Element not found." << endl;
    return 0;
}