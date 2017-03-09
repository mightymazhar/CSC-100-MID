#include <iostream>                           // Creates a library to store data.       
#include <string>                             // Creates a library to store string.        
using namespace std;

int main ()                        // Main function.

{                      // Starts the main function.                            
    string name;     // Assingning an input to the main function.
    string Nijhum;
    string Rabbi;


    cout << "Hello! " << endl << "What is your name? " << endl;  // Text output asking for user's input. // endl creates line gap.
    cin >> name;   // Takes user's input.

    if (name == "Nijhum")  // creates a conditional setting for a specific output
    {
        cout << "Hello Nijhum! " << endl;  // Uses the input of the user to create an output.  // endl creates line gap.
    }

    else if (name == "Rabbi") // creates a conditional setting for a specific output
    {
        cout << "Hello Rabbi! " << endl;
    }

    else
    {
        cout << "Hello! " << endl;
    }



    return 0; // Terminates the program.
} // Ends the main function.

