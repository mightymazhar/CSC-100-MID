#include <iostream> //creates a library to store data
#include <string> //creates library to store strings
#include <cmath> // creates library to store floats

using namespace std;

int main () // main function

{
    string forename;  // enters string input to library
    string surname;
    int year;  // includes integer valur for year               

    cout << "What is your forename? " << endl;
    cin >> forename;

    cout << endl << "What is your surname? " << endl;
    cin >> surname;

    cout << endl << "Which year were you born in? " << endl;
    cin >> year;

    cout << endl << "So you are, " << endl << forename << " " << surname << " " << year << endl;

    return 0;
}
