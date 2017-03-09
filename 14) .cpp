#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    float x;
    float y;

    cout << "Enter your x coordinate: ";
    cin >> x;

    cout << endl << "Enter your y coordinate: ";
    cin >> y;

    if ( x > 0 && y > 0 )
    {
        cout << endl << "Your coordinate is in the 1st quadrant" << endl;
    }

    else if ( x < 0 && y < 0 )
    {
        cout << endl << "Your coordinate is in the 3rd quadrant" << endl;
    }

    else if ( x < 0 && y > 0 )
    {
        cout << endl << "Your coordinate is in the 2nd quadrant" << endl;
    }

    else
    {
        cout << endl << "Your coordinate is in the 4th quadrant" << endl;
    }


    return 0;
}
