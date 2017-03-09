#include <iostream>
#include <string>
using namespace std;

int main ()

{
    string name;
    string Nijhum;
    string Rabbi;


    cout << "Hello! " << endl << "What is your name? " << endl;
    cin >> name;

    if (name == "Nijhum")
    {
        cout << "Hello Nijhum! " << endl;
    }

    else if (name == "Rabbi")
    {
        cout << "Hello Rabbi! " << endl;
    }

    else
    {
        cout << "Hello! " << endl;
    }



    return 0;
}
