#include <iostream> //creates a library to store data
#include <string>  //creates library to store strings
#include <cmath>  // creates library to store floats

using namespace std;

int main ()

{
    int a;
    int b;

    cout << "Enter a number a: ";
    cin >> a;

    cout << endl << "Enter a number b: ";
    cin >> b;

    if ( b == a ) //creates a condition for output
    {
        cout << endl << a << " and " << b << " are equal" << endl;
    }

    else if ( a == b )
    {
        cout << endl << b << " and " << a << " are equal" << endl;
    }

    else //creates output if no condition is met.
    {
        cout << endl << a << " and " << b << " are not equal" << endl;
    }


    return 0;
}
