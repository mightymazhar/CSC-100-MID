#include <iostream> //creates a library to store data
#include <string> //creates library to store strings
#include <cmath> // creates library to store floats

using namespace std;

int main ()

{
    float a; // includes coefficients to decimal accuracy
    float b;
    float c;

    float result_1; // includes output result to decimal accuracy
    float result_2;

    cout << "Please enter coefficient a: ";
    cin >> a;

    cout << endl << "Please enter coefficient b: ";
    cin >> b;

    cout << endl << "Please enter coefficient c: ";
    cin>> c;

    float formula;
    float real;
    float imaginary;

    formula = b*b - 4*a*c;


    if (formula > 0) // sets condition for formula output
    {
        result_1 = (-b + sqrt(formula)) / (2*a);  //formula for result calculation
        result_2 = (-b - sqrt(formula)) / (2*a);

        cout << endl << "Your roots are real and different." << endl;

        cout << endl <<"root 1 = " << result_1 << endl;

        cout << endl << "root 2 = " << result_2 << endl;
    }

    else if (formula == 0)
    {
        cout << endl << "Roots are real and same." << endl;

        result_1 = (-b + sqrt(formula)) / (2*a); //formula for result calculation

        cout << endl << "root 1 = root 2 = " << result_1 << endl;
    }

    else
    {
        real = -b/(2*a); // formula for real valur calculation

        imaginary = sqrt(-formula)/(2*a); //formula for imaginary value calculation

        cout << endl << "Roots are complex and different." << endl;

        cout << endl << "root 1 = " << real << " + " << imaginary << "i" << endl; 

        cout << endl << "root 2 = " << real << " - " << imaginary << "i" << endl;
    }

    return 0;
}
