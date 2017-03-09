#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    int a;
    int b;

    cout << "Enter a number a: ";
    cin >> a;

    cout << endl << "Enter a number b: ";
    cin >> b;

    if ( b == a )
    {
        cout << endl << a << " and " << b << " are equal" << endl;
    }

    else if ( a == b )
    {
        cout << endl << b << " and " << a << " are equal" << endl;
    }

    else
    {
        cout << endl << a << " and " << b << " are not equal" << endl;
    }


    return 0;
}
