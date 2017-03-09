#include <iostream> //creates a library to store data
#include <string> //creates library to store strings
#include <cmath> // creates library to store floats

using namespace std;

int main ()

{
    float temp; // includes temperature values to decimal accuracy

    cout << "What is the temperature today?: ";
    cin >> temp;

    if (temp < 0) // sets certain condition for temperature output
    {
        cout << endl << "Freezing weather " << endl;
    }

    else if (temp > 0 && temp < 10) // sets certain condition for temperature output
    {
        cout << endl << "Very cold weather " << endl;
    }

    else if (temp > 10 && temp < 20) // sets certain condition for temperature output
    {
        cout << endl << "Cold weather " << endl;
    }

    else if (temp > 20 && temp < 30) // sets certain condition for temperature output
    {
        cout << endl << "Normal weather " << endl;
    }

    else if (temp > 30 && temp < 40) // sets certain condition for temperature output
    {
        cout << endl << "Hot weather " << endl;
    }

    else
    {
        cout << endl << "Very hot weather" << endl; // output rgardless of condition
    }

    return 0;
}
