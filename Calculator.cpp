#include <iostream>

using namespace std;

int main ()

{
    float a;
    float b;
    int add;
    int subtract;
    int multiply;
    int divide;
    int calculation;
    int result;

    cout << "Enter a number : ";

    cin >> a;

    cout << "Enter another number : ";

    cin >> b;

    cout << "Enter function : ";
    cin >> calculation;

    add = (a + b);
    subtract = (a - b);
    multiply = (a * b);
    divide = (a / b);

    if (calculation = add)
   {
       cout << "your result is " << (a + b) << endl;
   }


    return 0;

}

