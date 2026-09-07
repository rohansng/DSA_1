#include<iostream>
using namespace std;

int main() {
    // create an array & initialise it
    int arr[5] = {10, 20, 30, 40, 50};

    // print the elements of the array
    //std::cout << "Elements of the array are: ";
    for (int i = 0; i < 5; i++) {
      cout << arr[i] << " ";
    }

    return 0;
}