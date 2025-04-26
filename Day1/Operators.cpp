#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // 1	Add two numbers
    cout << "Addition: " << a + b << endl;
    // 2	Subtract two numbers
    cout << "Subtraction: " << a - b << endl;
    // 3	Multiply two numbers
    cout << "Multiplication: " << a * b << endl;
    // 4	Divide two numbers
    cout << "Division: " << a / b << endl;
    // 5	Modulus of two numbers
    cout << "Modulus: " << a % b << endl;
    // Compare two numbers using >
    cout << "Greater than: " << (a > b) << endl;
    // Compare two numbers using ==
    cout << "Equal to: " << (a == b) << endl;
    // 8	Logical AND (&&) two conditions using &&
    cout << "Logical AND: " << ((a > b) && (a < b)) << endl;
    // 9	Logical OR (||) two conditions using ||
    cout << "Logical OR: " << ((a > b) || (a < b)) << endl;
    // 10   increment and decrement operators
    cout << "Increment: " << ++a << endl;      // Pre-increment
    cout << "Decrement: " << --b << endl;      // Pre-decrement
    cout << "Post-increment: " << a++ << endl; // Post-increment
    cout << "Post-decrement: " << b-- << endl; // Post-decrement
}
