// Algorithm Challenge
// 17 – Triangle Area

#include <iostream>
#include <cmath> // for mathematical functions
using namespace std;

int main()
{
    float base, height, area;

    // Ask the user to enter the base of the triangle
    cout << "Enter the base: ";
    cin >> base;

    // Ask the user to enter the height of the triangle
    cout << "Enter the height: ";
    cin >> height;

    // Calculate the area of the triangle
    // Formula: area = 0.5 * base * height
    area = 0.5 * base * height;

    // Display the result
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}

