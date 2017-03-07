#include <iostream>

using namespace std;

int main ()

{
    string name;
    string date;
    string number;

    cout << "What is your name? " << endl;
    cin >> name;

    cout << "Which year were you born in? " << endl;
    cin >> date;

    cout << "What is your phone number? " << endl;
    cin >> number;

    cout << endl << "So you are " << name << "." << endl << "You were born in " << date << "." << endl << "Your phone number is " << number << "." << endl;

    return 0;

}
