#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50};

    /*
We create an array of size 6.
Why 6?
Because we originally have 5 elements, and we want to add one more
    
    */
    int n = 5;

    // Shift elements to the right
    for (int i = n; i > 1; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert 15 at index 1
    arr[1] = 15;
    n++;

    /*
    Before insertion:
    n = 5
    After insertion:
    n = 6
    */

    // Print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
First iteration
arr[5] = arr[4];

So:

Before:
Index:  0   1   2   3   4   5
        10  20  30  40  50   _

After:
Index:  0   1   2   3   4   5
        10  20  30  40  50  50

The 50 moves from index 4 → index 5.


Fourth iteration
i = 2
Therefore:
arr[2] = arr[1];
20 moves to index 2:

10  20  20  30  40  50

Now the loop stops because:

i > 1

is no longer true when i = 1.

So we have created an empty position at index 1.

Conceptually:

Index:  0   1   2   3   4   5
        10   _  20  30  40  50
4. Insert 15

Now:

arr[1] = 15;

*/


/*
if index was 2:
for (int i = n; i > 2; i--) {
        arr[i] = arr[i - 1];
    }

*/