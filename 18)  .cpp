#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    char letter;

    cout << "Please enter a letter: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout << endl << "Your letter is a vowel " << endl;
    }

    else
    {
        cout << endl << "Your letter is a consonant " << endl;
    }



    return 0;
}
