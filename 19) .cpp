#include <iostream> //creates a library to store data
#include <string>  //creates library to store strings
#include <cmath>  // creates library to store floats

using namespace std;

int main ()

{
    float cost; // includes integer value for cost to decimal accuracy
    float sell; // includes integer value for selling price to decimal accuracy


    cout << "Enter your cost price: ";
    cin >> cost;

    cout << endl << "Enter your selling price: ";
    cin >> sell;

    float profit; // includes output values to decimal accuracy
    float loss;

    profit = sell - cost; // formula for calculating output
    loss = cost - sell;

    if ( sell > cost ) // condition for choosing one of the two formulas as per user's desired output  
    {
        cout << endl << "You have made a profit of: " << profit << endl;
    }
 
    else if ( cost > sell ) // condition for choosing one of the two formulas as per user's desired output  
    {
        cout << endl << "You have suffered a loss of: " << loss << endl;
    }

    else ; // condition regardless of previous conditions
    {
        cout << endl << "You have neither profit nor loss" << endl;
    }


    return 0;
}
