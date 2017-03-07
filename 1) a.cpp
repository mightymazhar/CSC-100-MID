#include <iostream>   // Creates a library to store data.

using namespace std;   

int main()                                      // Main function.

{                                                        // Starts the main function.
    string name;                                         // Assingning an input to the main function.

    cout << "Hello what is your name? " << endl;          // Text output asking for user's input. // endl creates line gap.
    cin >> name;                                          // Takes user's input.

    cout << "Hi there " << name << "." << endl;           // Uses the input of the user to create an output.  // endl creates line gap.

    return 0;                                            // Terminates the program.
}                                                        // Ends the main function.
