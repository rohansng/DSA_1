#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    // Ask for number of elements in the array
    cout << "Enter size of the array: "<< endl;
    cin >> n;
    int arr[n];
    // take input of n elements in the array
    cout << "Enter elements of the array: " << endl;
    for (int i =0; i<n; i++) {
        cin >> arr[i];
    }
        // print the elements of the array
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
return 0;
}