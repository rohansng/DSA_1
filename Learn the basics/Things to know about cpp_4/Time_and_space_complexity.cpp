#include <iostream>
using namespace std;

/*
===========================================================
        TIME & SPACE COMPLEXITY — COMPLETE C++ NOTES
===========================================================

TIME COMPLEXITY
---------------
Time complexity tells us how the number of operations
grows when the input size N grows.

It does NOT mean actual seconds.

For example:

N = 10       -> 10 operations
N = 100      -> 100 operations
N = 1000     -> 1000 operations

This is:

                O(N)

We use Big-O notation to describe this growth.

Common complexities:

O(1)          Constant
O(log N)      Logarithmic
O(N)          Linear
O(N log N)    Linearithmic
O(N^2)        Quadratic
O(N^3)        Cubic
O(2^N)        Exponential
O(N!)         Factorial


IMPORTANT RULES
---------------

1. Usually consider the WORST CASE.

2. Ignore CONSTANTS.

   O(3N)     -> O(N)
   O(100N)   -> O(N)

3. Ignore LOWER ORDER TERMS.

   O(N^2 + N + 10)
        ↓
      O(N^2)


===========================================================
1. O(1) — CONSTANT TIME
===========================================================
*/

void constantTime()
{
    int n = 100;

    // Only one operation is performed.
    cout << n << endl;

    /*
    No matter how large N becomes, this statement
    executes approximately the same number of times.

    Time Complexity:
        O(1)

    Space Complexity:
        O(1)

    Why?

    We only use a fixed number of variables.
    */
}


/*
===========================================================
2. O(N) — LINEAR TIME
===========================================================
*/

void linearTime(int n)
{
    // This loop runs N times.
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }

    /*
    Suppose:

    N = 5

    Loop executes:
        0
        1
        2
        3
        4

    Total = 5 operations

    If N = 100:
        100 iterations

    If N = 1,000,000:
        1,000,000 iterations

    Therefore:

        Time Complexity = O(N)

    Space Complexity = O(1)

    Because we only use:
        i
        n

    No additional array/vector is created.
    */
}


/*
===========================================================
3. O(2N) -> O(N)
===========================================================
*/

void twoLinearLoops(int n)
{
    // First loop -> N operations
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }

    // Second loop -> N operations
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }

    /*
    Total operations:

        N + N
        = 2N

    But Big-O ignores constants.

        O(2N)
          ↓
        O(N)

    Therefore:

        Time Complexity = O(N)
    */
}


/*
===========================================================
4. O(N^2) — NESTED LOOPS
===========================================================
*/

void quadraticTime(int n)
{
    // Outer loop runs N times.
    for (int i = 0; i < n; i++)
    {
        // Inner loop also runs N times
        // for every value of i.
        for (int j = 0; j < n; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    /*
    Let's say:

        N = 3

    Outer loop:
        3 times

    For EACH outer iteration,
    inner loop runs:
        3 times

    Therefore:

        3 × 3 = 9

    General case:

        N × N
        = N^2

    Therefore:

        Time Complexity = O(N^2)

    Space Complexity = O(1)
    */
}


/*
===========================================================
5. O(N^3) — THREE NESTED LOOPS
===========================================================
*/

void cubicTime(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << i << j << k << endl;
            }
        }
    }

    /*
    Outer loop:
        N times

    Second loop:
        N times

    Third loop:
        N times

    Total:

        N × N × N
        = N^3

    Therefore:

        Time Complexity = O(N^3)
        Space Complexity = O(1)
    */
}


/*
===========================================================
6. O(N^2) WITH i + 1 ITERATIONS
===========================================================
*/

void triangularLoop(int n)
{
    for (int i = 0; i < n; i++)
    {
        // j runs from 0 to i
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    /*
    Let's calculate the number of iterations.

    i = 0 -> 1 time
    i = 1 -> 2 times
    i = 2 -> 3 times
    i = 3 -> 4 times
    ...
    i = N-1 -> N times

    Total:

        1 + 2 + 3 + ... + N

    Formula:

        N(N + 1)
        ---------
            2

    Expand:

        (N^2 + N) / 2

    Ignore constants:

        O(N^2 / 2)

    Ignore constant coefficient:

        O(N^2)

    Therefore:

        Time Complexity = O(N^2)
    */
}


/*
===========================================================
7. O(log N) — DIVIDING BY 2
===========================================================
*/

void logarithmicTime(int n)
{
    while (n > 1)
    {
        // Every iteration cuts n approximately in half.
        n = n / 2;

        cout << n << endl;
    }

    /*
    Suppose:

        N = 16

    Values:

        16
         ↓
         8
         ↓
         4
         ↓
         2
         ↓
         1

    Only 4 iterations!

    Because:

        16 -> 8 -> 4 -> 2 -> 1

    In general:

        N -> N/2 -> N/4 -> N/8 -> ...

    Therefore:

        Time Complexity = O(log N)

    This is MUCH faster than O(N).

    Example:

        N = 1,000,000

    O(N):
        ~1,000,000 operations

    O(log N):
        ~20 operations
    */
}


/*
===========================================================
8. O(N LOG N)
===========================================================
*/

void nLogN(int n)
{
    // Outer loop -> N times
    for (int i = 0; i < n; i++)
    {
        int x = n;

        // Inner loop -> log N times
        while (x > 1)
        {
            x = x / 2;
        }
    }

    /*
    Outer loop:

        N

    Inner loop:

        log N

    Therefore:

        N × log N

    Time Complexity:

        O(N log N)

    This complexity appears frequently in:

        Merge Sort
        Heap Sort
        Efficient sorting algorithms
    */
}


/*
===========================================================
9. O(N + M)
===========================================================
*/

void twoDifferentInputs(int n, int m)
{
    // N operations
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }

    // M operations
    for (int j = 0; j < m; j++)
    {
        cout << j << " ";
    }

    /*
    Total:

        N + M

    Therefore:

        Time Complexity = O(N + M)

    IMPORTANT:

    We cannot always write O(N).

    Why?

    Because N and M are independent inputs.
    */
}


/*
===========================================================
10. O(N × M)
===========================================================
*/

void twoDifferentNestedInputs(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    /*
    Outer loop:
        N

    Inner loop:
        M

    Total:

        N × M

    Time Complexity:

        O(NM)
    */
}


/*
===========================================================
11. CONSTANT + LINEAR
===========================================================
*/

void constantPlusLinear(int n)
{
    // Constant operation
    int x = 10;

    // N operations
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }

    /*
    Total:

        1 + N

    Therefore:

        O(N + 1)

    Ignore constant:

        O(N)
    */
}


/*
===========================================================
12. DIFFERENT TERMS
===========================================================
*/

void differentTerms(int n)
{
    // O(N)
    for (int i = 0; i < n; i++)
    {
        cout << i;
    }

    // O(N^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j;
        }
    }

    /*
    Total:

        O(N) + O(N^2)

    Therefore:

        O(N + N^2)

    Which term grows faster?

        N^2 grows faster than N.

    So we ignore N.

        O(N^2)
    */
}


/*
===========================================================
13. O(N^3 + N^2 + N)
===========================================================
*/

void highestPowerWins(int n)
{
    // O(N)
    for (int i = 0; i < n; i++)
    {
        cout << i;
    }

    // O(N^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j;
        }
    }

    // O(N^3)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << i << j << k;
            }
        }
    }

    /*
    Total:

        O(N + N^2 + N^3)

    Highest growing term:

        N^3

    Therefore:

        Time Complexity = O(N^3)
    */
}


/*
===========================================================
14. BEST CASE AND WORST CASE
===========================================================
*/

void searchElement(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Found!" << endl;

            return;
        }
    }

    cout << "Not Found!" << endl;

    /*
    Suppose:

        arr = {10, 20, 30, 40, 50}

    Target = 10

    We find it immediately.

    BEST CASE:

        1 comparison

        Time = O(1)


    Target = 50

    We check:

        10
        20
        30
        40
        50

    WORST CASE:

        N comparisons

        Time = O(N)


    Therefore:

        Best Case  = O(1)
        Worst Case = O(N)

    In DSA, when someone simply asks for the
    time complexity, we generally discuss the
    worst-case complexity unless specified otherwise.
    */
}


/*
===========================================================
15. SPACE COMPLEXITY — O(1)
===========================================================
*/

void constantSpace(int n)
{
    int a = 10;
    int b = 20;
    int c = a + b;

    cout << c << endl;

    /*
    We only have a fixed number of variables:

        a
        b
        c

    Even if N becomes huge, the number of variables
    does not increase.

    Therefore:

        Space Complexity = O(1)
    */
}


/*
===========================================================
16. SPACE COMPLEXITY — O(N)
===========================================================
*/

void linearSpace(int n)
{
    // Creates an array of size N.
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    delete[] arr;

    /*
    If:

        N = 10

    Array stores:
        10 integers

    If:

        N = 1,000

    Array stores:
        1,000 integers

    Therefore:

        Space Complexity = O(N)
    */
}


/*
===========================================================
17. TIME O(N) + SPACE O(N)
===========================================================
*/

void bothLinear(int n)
{
    // Extra memory proportional to N
    int* arr = new int[n];

    // N operations
    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
    }

    delete[] arr;

    /*
    Time:

        Loop runs N times

        Time = O(N)


    Space:

        Array contains N elements

        Space = O(N)
    */
}


/*
===========================================================
18. IMPORTANT: TIME AND SPACE ARE DIFFERENT
===========================================================

A program can have:

    O(N) time
    O(1) space

OR

    O(N) time
    O(N) space

OR

    O(N^2) time
    O(1) space

They are two different measurements.

===========================================================
19. COMMON COMPLEXITIES — FROM BETTER TO WORSE
===========================================================

For large N:

    O(1)
       ↓
    O(log N)
       ↓
    O(N)
       ↓
    O(N log N)
       ↓
    O(N^2)
       ↓
    O(N^3)
       ↓
    O(2^N)
       ↓
    O(N!)

Generally:

    Smaller growth = better scalability

===========================================================
20. QUICK EXAMPLES
===========================================================
*/

void quickExamples(int n)
{
    // Example A
    // One operation
    // O(1)


    // Example B
    for (int i = 0; i < n; i++)
    {
        // O(N)
    }


    // Example C
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // O(N^2)
        }
    }


    // Example D
    for (int i = 0; i < n; i++)
    {
        int x = n;

        while (x > 1)
        {
            x /= 2;
        }

        // O(N log N)
    }
}


/*
===========================================================
21. MAIN FUNCTION
===========================================================
*/

int main()
{
    int n = 10;

    // Try calling any function here.

    constantTime();

    linearTime(n);

    quadraticTime(n);

    logarithmicTime(n);

    nLogN(n);

    return 0;
}


/*
===========================================================
              FINAL CHEAT SHEET
===========================================================

CODE PATTERN                         COMPLEXITY
------------------------------------------------

int x = 10;                          O(1)

for(i = 0; i < N; i++)              O(N)

for(i = 0; i < N; i++)
    for(j = 0; j < N; j++)          O(N^2)

for(i = 0; i < N; i++)
    for(j = 0; j < N; j++)
        for(k = 0; k < N; k++)      O(N^3)

while(N > 1)
    N = N / 2;                       O(log N)

N times + log N times               O(N log N)

for(i = 0; i < N; i++)
    for(j = 0; j <= i; j++)         O(N^2)

array of size N                     O(N) space

few variables                       O(1) space


===========================================================
THE MOST IMPORTANT RULE
===========================================================

When you see code:

STEP 1:
    Identify how many times each loop runs.

STEP 2:
    If loops are N after N:

        N × N = N^2

STEP 3:
    If loops are one after another:

        N + N = 2N
              = O(N)

STEP 4:
    If a value repeatedly becomes half:

        N → N/2 → N/4 → ...

        = O(log N)

STEP 5:
    If you get:

        O(N^3 + N^2 + N)

    Keep the fastest-growing term:

        O(N^3)

STEP 6:
    Ignore constants:

        O(5N) → O(N)

        O(N^2/2) → O(N^2)

        O(100N^3) → O(N^3)

===========================================================
*/
