#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    int hours;
    int minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << endl << "Enter the number of minutes: ";
    cin >> minutes;

    int totalminutes = (hours*60) + minutes;

    cout << endl << "Your total time in minutes is: " << totalminutes << "." << endl;

    return 0;
}
