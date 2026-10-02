#include <iostream>
using namespace std;

void modifyArray(int arr[], int n)
{
    // Change the first element
    arr[0] = 100;
}

int main()
{
    int arr[] = {10, 20, 30};

    cout << "Before: " << arr[0] << endl;

    modifyArray(arr, 3);

    cout << "After: " << arr[0] << endl;

    return 0;
}

// java is always pass by value