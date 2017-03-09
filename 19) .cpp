#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    float cost;
    float sell;


    cout << "Enter your cost price: ";
    cin >> cost;

    cout << endl << "Enter your selling price: ";
    cin >> sell;

    float profit;
    float loss;

    profit = sell - cost;
    loss = cost - sell;

    if ( sell > cost )
    {
        cout << endl << "You have made a profit of: " << profit << endl;
    }

    else if ( cost > sell )
    {
        cout << endl << "You have suffered a loss of: " << loss << endl;
    }

    else ;
    {
        cout << endl << "You have neither profit nor loss" << endl;
    }


    return 0;
}
