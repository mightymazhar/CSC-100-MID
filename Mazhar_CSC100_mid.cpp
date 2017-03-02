#include <iostream>
#include <cmath> //inputs variables in data library

using namespace std;  //

int main () //This is the main function
{             // start of main body
   float num;
   float powered;
   float power;

   cout << "enter a number\n" << endl;
   cin >> num;

   cout << "enter the power of your number\n" << endl;
   cin >> power;

   powered = pow(num , power);

   cout << "Your number  " << num << endl << "to the power  " << power << " is" << endl <<  powered << endl;


    return 0;  // terminates program
}
