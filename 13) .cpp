#include <iostream> // creates library to store data
#include <string> // creates library to store strings
#include <cmath> // creates library to store floats

using namespace std;

int main ()

{
    float a; // enters integer digits with decimal accuracy
    float b;
    float c;

    cout << "Enter a number a: ";
    cin >> a;

    cout << endl << "Enter a number b: ";
    cin >> b;

    cout << endl << "enter a number c; ";
    cin >> c;

    if ( a > b && a > c) // creates condition for output by putting limits
    {
        cout << endl << "The largest number among " << a << ", " << b << " and " << c << " is " << a << endl;
    }

    else if ( b > a && b > c)
    {
        cout << endl << "The largest number among " << a << ", " << b << " and " << c << " is " << b << endl;
    }

    else ( c > a && c > b);
    {
        cout << endl << "The largest number among " << a << ", " << b << " and " << c << " is " << c << endl;
    }


    return 0;
}
