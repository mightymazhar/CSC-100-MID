#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
    float a;
    float b;
    float c;

    float result_1;
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


    if (formula > 0)
    {
        result_1 = (-b + sqrt(formula)) / (2*a);
        result_2 = (-b - sqrt(formula)) / (2*a);

        cout << endl << "Your roots are real and different." << endl;

        cout << endl <<"root 1 = " << result_1 << endl;

        cout << endl << "root 2 = " << result_2 << endl;
    }

    else if (formula == 0)
    {
        cout << endl << "Roots are real and same." << endl;

        result_1 = (-b + sqrt(formula)) / (2*a);

        cout << endl << "root 1 = root 2 = " << result_1 << endl;
    }

    else
    {
        real = -b/(2*a);

        imaginary = sqrt(-formula)/(2*a);

        cout << endl << "Roots are complex and different." << endl;

        cout << endl << "root 1 = " << real << " + " << imaginary << "i" << endl;

        cout << endl << "root 2 = " << real << " - " << imaginary << "i" << endl;
    }

    return 0;
}
