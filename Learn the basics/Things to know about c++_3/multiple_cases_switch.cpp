#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Weekday" << endl;
            break;
        case 6:
        case 7:
            cout << "Weekend" << endl;
            break; 
        default:
            cout << "Invalid day number" << endl;
            break;
    }
    return 0;
}

/*


*/