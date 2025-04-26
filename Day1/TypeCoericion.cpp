#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Add a number and a string by converting the string to an integer (e.g., 5 + "6")
    int num = 5;
    string str = "6";
    // Implicit conversion of string to int
    int result = num + stoi(str); // Convert string to int using stoi
    cout << "Addition of number and string: " << result << endl;

    cout << "Multiplication of number and string: " << num * stoi(str) << endl; // Convert string to int using stoi
    cout << "Subtraction of number and string: " << num - stoi(str) << endl;    // Convert string to int using stoi
    // Concatenate a string and a number by converting the number to a string (e.g., "6" + 5)
    cout << "Concatenation of string and number: " << str + to_string(num) << endl; // Convert int to string using to_string
    // check type of result
    cout << "Type of result: " << typeid(result).name() << endl;                      // Check the type of result
    cout << "Type of concatenation: " << typeid(str + to_string(num)).name() << endl; // Check the type of concatenation

    return 0;
}