#include <iostream> //creates a library to store data
#include <string> //creates library to store strings
#include <cmath> // creates library to store floats

using namespace std;

int main ()

{
    char letter;

    cout << "Please enter a letter: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') //sets multiple conditions to input for a certain output 
    {
        cout << endl << "Your letter is a vowel " << endl;
    }

    else // output without condition
    {
        cout << endl << "Your letter is a consonant " << endl;
    }



    return 0;
}
