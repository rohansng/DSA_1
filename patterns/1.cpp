/*
For n = 5:

*****
*****
*****
*****
*****

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern(int n){
        // outer loop controls the number of rows
        for(int i = 0; i < n; i++){
            // inner loop prints '*' n times for each row
            for(int j = 0; j < n; j++){
                cout << "*";
            }
            // move to the next line after printing n '*' characters    
            cout << endl;
        }
    }
};

int main() {
    // create an object of the Solution 
    Solution obj;
    // call the pattern function with n = 5
    obj.pattern(5);

    return 0;
}