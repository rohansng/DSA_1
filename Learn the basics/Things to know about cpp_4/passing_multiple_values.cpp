#include <iostream>
using namespace std;

// Both a and b refer to original variables
void calculate(int x, int y, int &sum, int &product)
{
    // x and y are copies
    // sum and product are references

    sum = x + y;
    product = x * y;
}

int main()
{
    int a = 5;
    int b = 4;

    int sum;
    int product;

    calculate(a, b, sum, product);

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}