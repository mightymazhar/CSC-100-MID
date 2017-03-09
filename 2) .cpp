#include <iostream> //creates a library to store data
#include <string> //creates library to store strings

using namespace std;

int main () // main function

{
    string name; // enters word values for inputs
    string date;
    string number;

    cout << "What is your name? " << endl;
    cin >> name;

    cout << "Which year were you born in? " << endl;
    cin >> date;

    cout << "What is your phone number? " << endl;
    cin >> number;

    cout << endl << "So you are " << name << "." << endl << "You were born in " << date << "." << endl << "Your phone number is " << number << "." << endl; // combined output including all strings

    return 0;

}
