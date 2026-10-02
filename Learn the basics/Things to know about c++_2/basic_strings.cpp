/*
A String is basically a sequence of characters.

*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "Hello World!";
    // cout << s; // Output: Hello World!
    // cout << s[0]; // Output: H

    
    /*
    for(int i = 0; i < s.length(); i++){
        cout << s[i] << " " << endl; // Output: H e l l o   W o r l d !
    }
    */

    // string length
    cout << "Length of the string is: " << s.length() << endl; // Output: 12
    cout << "Size of the string is: " << s.size() << endl; // Output: 12

    return 0;
}
