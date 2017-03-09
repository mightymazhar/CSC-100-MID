#include <iostream> // creates a library to input data
#include <string> // creates a library to input strings
#include <cmath> // creates a library to store floats

using namespace std;

int main ()

{
    int age; // integer input for age

    cout << "Please enter your age: ";
    cin >> age;

    if ( age > 15 ) // condition for output
    {
        cout << endl << "Congratulations you are eligible to vote! " << endl;
    }

    else if ( age < 15 ) // another condition for output
    {
        cout << endl << "Sorry. you are not eligible to vote " << endl;
    }

    return 0;
}
