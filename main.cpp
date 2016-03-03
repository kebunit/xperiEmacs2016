#include "Herbivor.h"
#include "Karnivor.h"
#include "Tumbuhan.h"


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
 /******************** DRAWING THE BOARD **************************/
   string input = "";
  int panjang = 0;
  int lebar =0;
    // asigning values, I suppose this is done allready.
  while (true) {
   cout << "Please enter a valid number: ";
   getline(cin, input);

   // This code converts from string to number safely.
   stringstream myStream(input);
   if (myStream >> panjang)
     break;
   cout << "Invalid number, please try again" << endl;
 }
 cout << "You entered: " << panjang << endl << endl;

  while (true) {
   cout << "Please enter a valid number: ";
   getline(cin, input);

   // This code converts from string to number safely.
   stringstream myStream(input);
   if (myStream >> lebar)
     break;
   cout << "Invalid number, please try again" << endl;
 }
 cout << "You entered: " << lebar << endl << endl;
 char matrix [panjang][lebar];
    for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
            matrix[x][y]='*';
        }
    }

    // showing the matrix on the screen

    for(int x=0;x<panjang;x++)  // loop 3 times for three lines
    {
        for(int y=0;y<lebar;y++)  // loop for the three elements on the line
        {
            cout<<matrix[x][y];  // display the current element out of the array
        }
    cout<<endl;  // when the inner loop is done, go to a new line
    }

/******************** DRAWING THE BOARD **************************/

    for(;;)
    {

    cout<<"sleep"<<endl;
    // Sleep for 50*1000ms
    Sleep(50000);

    }

    return 0;  // return 0 to the OS.
}

/*int main(){

  Karnivor k;
  k.move();
  k.kill();
}*/
