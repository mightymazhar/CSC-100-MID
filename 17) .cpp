#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    float temp;

    cout << "What is the temperature today?: ";
    cin >> temp;

    if (temp < 0)
    {
        cout << endl << "Freezing weather " << endl;
    }

    else if (temp > 0 && temp < 10)
    {
        cout << endl << "Very cold weather " << endl;
    }

    else if (temp > 10 && temp < 20)
    {
        cout << endl << "Cold weather " << endl;
    }

    else if (temp > 20 && temp < 30)
    {
        cout << endl << "Normal weather " << endl;
    }

    else if (temp > 30 && temp < 40)
    {
        cout << endl << "Hot weather " << endl;
    }

    else
    {
        cout << endl << "Very hot weather" << endl;
    }

    return 0;
}
