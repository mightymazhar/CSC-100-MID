#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    float a;
    float b;
    float c;

    cout << "Enter a number a: ";
    cin >> a;

    cout << endl << "Enter a number b: ";
    cin >> b;

    cout << endl << "enter a number c; ";
    cin >> c;

    if ( a > b && a > c)
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
