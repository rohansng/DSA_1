#include <iostream>
using namespace std;

int main()
{
    // ---------------------------------------------------------
    // SWITCH CASE STATEMENT
    // ---------------------------------------------------------
    // switch is used when we want to compare ONE variable
    // with MULTIPLE fixed/exact values.
    //
    // Example:
    // day = 1  -> Monday
    // day = 2  -> Tuesday
    // day = 3  -> Wednesday
    // etc.
    // ---------------------------------------------------------

    int day;

    // Take input from the user
    cout << "Enter a number (1-7): ";
    cin >> day;


    // ---------------------------------------------------------
    // SWITCH
    // ---------------------------------------------------------
    // switch(day) means:
    // "Look at the value stored inside 'day' and find
    //  a matching case."
    //
    // IMPORTANT:
    // The value inside each case must be a CONSTANT value.
    // ---------------------------------------------------------

    switch (day)
    {
        // If day == 1, this block executes
        case 1:
            cout << "Monday" << endl;

            // break exits the switch statement.
            // Without break, C++ will continue executing
            // the next cases.
            break;


        // If day == 2, this block executes
        case 2:
            cout << "Tuesday" << endl;
            break;


        // If day == 3, this block executes
        case 3:
            cout << "Wednesday" << endl;
            break;


        // If day == 4, this block executes
        case 4:
            cout << "Thursday" << endl;
            break;


        // If day == 5, this block executes
        case 5:
            cout << "Friday" << endl;
            break;


        // If day == 6, this block executes
        case 6:
            cout << "Saturday" << endl;
            break;


        // If day == 7, this block executes
        case 7:
            cout << "Sunday" << endl;
            break;


        // -----------------------------------------------------
        // DEFAULT
        // -----------------------------------------------------
        // If NONE of the above cases match,
        // the default block executes.
        //
        // For example:
        // day = 10 -> no case matches -> default executes
        // -----------------------------------------------------

        default:
            cout << "Invalid day!" << endl;
    }


    // Program ends here
    return 0;
}

/*
switch (10 + 5)
{
    case 15:
        cout << "Correct";
        break;
}
*/