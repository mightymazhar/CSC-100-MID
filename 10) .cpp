#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    string forename;
    string surname;
    int year;

    cout << "What is your forename? " << endl;
    cin >> forename;

    cout << endl << "What is your surname? " << endl;
    cin >> surname;

    cout << endl << "Which year were you born in? " << endl;
    cin >> year;

    cout << endl << "So you are, " << endl << forename << " " << surname << " " << year << endl;

    return 0;
}
