/* 
* 
** 
*** 
**** 
***** 
 
*/ 
 
#include <bits/stdc++.h> 
using namespace std; 
 
class solution{ 
    public: 
    void pattern2(int n){ 
        /* 
 
        // outer loop controls the number of rows 
        for(int i = 0; i < n; i++){ 
           // Inner loop prints '*' (i+1) times for each row 
            for(int j = 0; j <= i; j++){ 
                cout << "*"; 
            } 
            // move to the next line after printing (i+1) '*' characters     
            cout << endl;  
        } 
     
        */ 
 
        // outer loop controls the number of rows 
        for(int i = 1; i <= n; i++){ 
            //Inner loop prints '*' in each row 
            // Row 1: 1 star 
            // Row 2: 2 stars   
            // Row 3: 3 stars 
            //... 
            for(int j = 1; j <= i; j++){ 
                cout << "*"; 
            } 
            
            // move to the next line after printing (i+1) '*' characters 
            cout << endl; 
        } 
    } 
}; 
 
int main(){ 
    // create an object of the solution class 
    solution obj; 
    
    // call the pattern2 function with n = 5 
    obj.pattern2(5); 
    
    return 0; 
}