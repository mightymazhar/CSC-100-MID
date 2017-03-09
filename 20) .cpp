#include <iostream> //creates a library to store data
#include <string> //creates library to store strings
#include <cmath> // creates library to store floats


using namespace std;

int main ()  //main function

{
    char grade; //includes character value for grade

    cout << "Enter your grade: ";
    cin >> grade;

    if ( grade == 'e'  ) //creates condition for output
    {
        cout << endl << "You have chosen: Excellent" << endl;
    }

    else if ( grade == 'v'  )
    {
        cout << endl << "You have chosen: Very Good" << endl;
    }

    else if ( grade == 'g'  )
    {
        cout << endl << "You have chosen: Good" << endl;
    }

    else if ( grade == 'a'  )
    {
        cout << endl << "You have chosen: Average" << endl;
    }

    else if  ( grade == 'f' )
    {
        cout << endl << "You have chosen: Fail" << endl;
    }

    else
    {
        cout << endl << "Incorrect Input" << endl;
    }



    return 0;
}
