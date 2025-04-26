#include <iostream>
#include <string>
#include <cmath>   // For math functions
#include <cstdlib> // For rand() function
using namespace std;

int main()
{
    int a = 45678;
    float b = 345678.4567;
    double c = 123456789.123456789;

    cout << "Round off to 2 decimal places: " << round(b * 100) / 100 << endl;            // Round off to 2 decimal places
    cout << "cieling of b: " << ceil(b) << endl;                                          // Ceiling of b
    cout << "Floor of b: " << floor(b) << endl;                                           // Floor of b
    cout << "Trunc of b: " << trunc(b) << endl;                                           // Truncate b
    cout << "Power of a^2: " << pow(a, 2) << endl;                                        // Power of a^2
    cout << "Square root of a: " << sqrt(a) << endl;                                      // Square root of a
    cout << "Absolute value of a: " << abs(a) << endl;                                    // Absolute value of a
    cout << "Generating a random number: " << rand() % 100 << endl;                       // Generating a random number between 0 and 99
    cout << "Generating a random number between 1 and 100: " << rand() % 100 + 1 << endl; // Generating a random number between 1 and 100

    return 0;
}