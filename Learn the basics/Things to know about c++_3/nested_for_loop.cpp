#include <iostream>
using namespace std;

int main() {

    // Outer loop runs 3 times
    for (int i = 0; i < 3; i++) {

        // Inner loop runs 3 times for each outer iteration
        for (int j = 0; j < 3; j++) {

            // Print the current values of i and j
            cout << "i = " << i
                 << ", j = " << j << endl;
        }
    }

    return 0;
}