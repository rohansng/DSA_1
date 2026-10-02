/*
1
12
123
1234
12345

*/

#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void pattern3(int n){
        // outer loop controls the number of rows
        for(int i = 1; i <= n; i++){
            // inner loop prints numbers from 1 to i for each row
            for(int j = 1; j <= i; j++){
                cout << j;
            }
            // move to the next line after printing numbers for each row    
            cout << endl;
        }
    }
};

int main(){
    // create an object of the solution class
    solution obj;
    
    // call the pattern3 function with n = 5
    obj.pattern3(5);
    
    return 0;
}