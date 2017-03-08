#include <iostream>            // Creates a library to store data.
#include <string>              // Creates a library to store strings.
#include <cmath>               // Creates a library to store floats.

using namespace std;

int main()                     // Main function.

{                              // Starts the main function.


    float radius;                                                //Decimal integer for radius


    cout << "Please enter radius of your sphere: ";                       //Asks user's input for radius in decimal integer
    cin >> radius;                                                        //takes user's input for radius in decimal integer

    float volume = (4*3.14*radius*radius*radius)/3;                      //Decimal formula for volume

    cout << endl << "The volume of your sphere is: " << volume << endl;          //Calculates volume and announces it

    return 0;                                                                    // Terminates the program.


}                                                                                // Ends the main function.

