//#include "Herbivor.h"
//#include "Karnivor.h"
//#include "Tumbuhan.h"
#include "Singa.cpp"
#include "Serigala.cpp"
#include "Kuda.cpp"
#include "Jerapah.cpp"
#include "Wortel.cpp"
#include "Rumput.cpp"
#include "Karnivor.h"
#include "Hewan.h"
#include "Makhluk.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
//#include <allegro.h>

using namespace std;

int main()
{
  srand(time(NULL));


 /******************** DRAWING THE BOARD **************************/
  Singa Sins(0,0,1,-1);
  //Serigala Ser;
  //allegro_init();
  //install_keyboard();
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
lebar = panjang;
if (panjang < 10){

  cout<<"kecil"<<endl;
  char matrix [panjang][lebar];
  Singa Sin ( 1, 0, 1, rand()%100);
  Singa Sin2 ( 2, 3, 1, rand()%100);
  Singa Sin3 ( 3, 5, 1, rand()%100);

  Serigala Ser ( 4, 3, 1, rand()%100);
  Serigala Ser2 ( 5, 9, 1, rand()%100);
  Serigala Ser3 ( 6, 7, 1, rand()%100);

  Jerapah  J ( 7, 9, 1, rand()%100);
  Jerapah  J2 ( 8, 6, 1, rand()%100);
  Jerapah  J3 ( 9, 3, 1, rand()%100);
  Kuda K ( 10, 1, 1, rand()%100);
  Kuda K2 ( 9, 2, 1, rand()%100);
   Kuda K3 ( 8, 3, 1, rand()%100);
  Wortel W ( 7, 8, rand()%100);
  Wortel W2 ( 6, 6, rand()%100);
  Wortel W3 ( 5, 5, rand()%100);
  Rumput R( 4, 2, rand()%100);
  Rumput R2( 3, 1, rand()%100);
  Rumput R3( 2, 2, rand()%100);
  Makhluk* matrix2[panjang][lebar];
  for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
            matrix2[x][y]=&Sins;
        }
    }

  for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
             if (matrix2[x][y]->GetId()==-1){
               if (x == Sin.GetPosisiX()&&y==Sin.GetPosisiY){
                 matrix2[x][y]=&Sin;
               }
                 else if (x == Sin2.GetPosisiX()&&y==Sin2.GetPosisiY){
                   matrix2[x][y]=&Sin2;
                 }
                else if (x == Sin3.GetPosisiX()&&y==Sin3.GetPosisiY){
                   matrix2[x][y]=&Sin3;
                 }
                else if (x == Sin2.GetPosisiX()&&y==Sin2.GetPosisiY){
                   matrix2[x][y]=&Sin2;
                 }
        }
    }




    for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
           if (matrix2[x][y]->GetId()==-1){
             cout <<'*';
           }
           if (matrix2[x][y]-> GetPower()==10&matrix2[x][y]->GetId()!= -1){
             cout<<'S';
           }
           else  if (matrix2[x][y]-> GetPower()==9){
             cout<<'J';
           }
                     else  if (matrix2[x][y]-> GetPower()==8){
             cout<<'s';
           }
                     else  if (matrix2[x][y]-> GetPower()==7){
             cout<<'K';
           }
                                else  if (matrix2[x][y]-> GetPower()==6){
             cout<<'R';
           }
                                else  if (matrix2[x][y]-> GetPower()==5){
             cout<<'W';
           }
        }
        cout<<endl;
    }




 }

 else if (panjang >=10 && panjang <20){
   cout <<"sedang"<<endl;
   char matrix [panjang][lebar];
    for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
            matrix[x][y]='*';
        }
    }

    for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='S';
      }
    }

    for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='s';
      }
    }

        for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='R';
      }
    }

            for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='W';
      }
    }

                for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='K';
      }
    }

                    for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='J';
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

}
 else if (panjang >= 20){
   cout<<"besar"<<endl;
   char matrix [panjang][lebar];
    for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
            matrix[x][y]='*';
        }
    }

    for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='S';
      }
    }

    for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='s';
      }
    }

        for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='R';
      }
    }

            for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='W';
      }
    }

                for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='K';
      }
    }

                    for (int i = 0; i < 3; i++){
      for (int y =0; y<3;y++){
       int v1 = rand() % panjang;
      int v2 = rand() % lebar;
      matrix[v1][v2]='J';
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

   }

 //if (key[KEY_SPACE])
   //      cout<<"Space is pressed"<<endl;
/******************** DRAWING THE BOARD **************************/

    return 0;  // return 0 to the OS.
}
