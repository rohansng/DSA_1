#include <iostream>
using namespace std;

int main() {

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {

        // Check whether the number is even
        if (i % 2 == 0) {

            cout << i << " is even" << endl;

        } else {

            cout << i << " is odd" << endl;
        }
    }

    return 0;
}