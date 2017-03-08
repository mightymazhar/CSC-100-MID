#include <iostream>            // Creates a library to store data.
#include <string>

using namespace std;

int main()                     // Main function.

{                              // Starts the main function.


    int numerator;                                         //Enters a integer for numerator
    int denominator;                                       //Enters a integer for denominator

    cout << "Enter the numerator of your fraction: ";      // Text output asking for user's input.
    cin >> numerator;                                      // Takes user's input.
    cout << "Enter the denominator of your fraction: ";    // Text output asking for user's input.
    cin >> denominator;                                    // Takes user's input.



    int quotient = numerator / denominator;                //Enters a integer with formula for calculation of quotient
    int remainder = numerator % denominator;               //Enters a integer with formula for calculation of remainder

    cout << endl << "quotient is: " << quotient <<endl;      // Uses the input of the user to create an output. // endl creates line gap.
    cout << endl << "remainder is: " << remainder <<endl;    // Uses the input of the user to create an output. // endl creates line gap.


    return 0;                                                  // Terminates the program.


}                                                              // Ends the main function.

