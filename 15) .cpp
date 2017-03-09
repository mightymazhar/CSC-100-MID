#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()

{
   string name;
   int roll;
   float csc;
   float mat;
   float hea;

   cout << "Please enter your name: ";
   cin >> name;

   cout << endl << "Please enter your roll: ";
   cin >> roll;

   cout << endl << "Please enter your CSC 100 marks: ";
   cin >> csc;

   cout << endl << "Please enter MAT 101 marks: ";
   cin >> mat;

   cout << endl << "Please enter HEA 101 marks: ";
   cin >> hea;

   float total = csc + mat + hea;
   float percentage = (total / 300)*100;

   cout << endl << "Name: " << name << endl << "Roll: " << roll << endl << "Marks in CSC 100: " << csc << endl << "Marks in MAT 101: " << mat << endl << "Marks in HEA 101: " << hea << endl << "Total percentage for 3 courses: " << percentage << endl;

   if (percentage > 80 )
   {
       cout << endl << "Congratulations! you have achieved first division" << endl;
   }

   else if (percentage < 80 && percentage > 70 )
   {
       cout << endl << "Your have achieved second division" << endl;
   }

   else if (percentage < 70 && percentage > 60)
   {
       cout << endl << "You have achieved third division" << endl;
   }

   else
   {
       cout << endl << "Your academic performance is not satisfactory" << endl;
   }

    return 0;
}
