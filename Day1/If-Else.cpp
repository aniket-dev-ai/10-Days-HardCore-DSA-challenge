#include <iostream>
using namespace std;

int main()
{
    int a = 89, b = 90;
    if (a > 0)
        cout << "a is positive" << endl;
    else
        cout << "a is negative" << endl;

    a < b ? cout << "a is less than b" << endl : cout << "a is greater than b" << endl; // Ternary operator

    a % 2 == 0 ? cout << "a is even" << endl : cout << "a is odd" << endl; // Ternary operator

    a > 18 ? cout << "a is adult" << endl : cout << "a is minor" << endl; // Ternary operator

    // leap year check
    int year = 2020;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        cout << year << " is a leap year" << endl;
    else
        cout << year << " is not a leap year" << endl;

    // calculate electricity bill discount
    cout << "Electricity bill calculation" << endl;
    int units = 100;
    float bill = 0.0;
    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = units * 2.0;
    else if (units <= 300)
        bill = units * 2.5;
    else
        bill = units * 3.0;
    if (bill > 1000)
        bill = bill - (bill * 0.1); // 10% discount on bill > 1000
    cout << "Electricity bill: " << bill << endl;
    return 0;
}