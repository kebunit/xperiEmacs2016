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
 else if (panjang >= 20){
   cout<<"kecil"<<endl;
  char matrix [panjang][lebar];
  Singa Sin ( 11, 0, 1, rand()%100);
  Singa Sin2 ( 12, 3, 1, rand()%100);
  Singa Sin3 ( 13, 15, 1, rand()%100);

  Serigala Ser ( 4, 3, 1, rand()%100);
  Serigala Ser2 ( 15, 19, 1, rand()%100);
  Serigala Ser3 ( 16, 7, 1, rand()%100);

  Jerapah  J ( 17, 19, 1, rand()%100);
  Jerapah  J2 ( 8, 6, 1, rand()%100);
  Jerapah  J3 ( 19, 13, 1, rand()%100);
  Kuda K ( 20, 1, 1, rand()%100);
  Kuda K2 ( 19, 12, 1, rand()%100);
   Kuda K3 ( 18, 3, 1, rand()%100);
  Wortel W ( 17, 8, rand()%100);
  Wortel W2 ( 16, 16, rand()%100);
  Wortel W3 ( 15, 5, rand()%100);
  Rumput R( 14, 2, rand()%100);
  Rumput R2( 13, 1, rand()%100);
  Rumput R3( 12, 2, rand()%100);
  Makhluk* matrix2[panjang][lebar];

  // initialization matriks
  for(int x=0;x<panjang;x++)
    {
        for(int y=0;y<lebar;y++)
        {
            matrix2[x][y]=&Sins;
        }
    }

  // insert singa
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
                else if (x == Ser.GetPosisiX()&&y==Ser.GetPosisiY){
                   matrix2[x][y]=&Ser;
                 }
                else if (x == Ser2.GetPosisiX()&&y==Ser2.GetPosisiY){
                   matrix2[x][y]=&Ser2;
                 }
                else if (x == Ser3.GetPosisiX()&&y==Ser3.GetPosisiY){
                   matrix2[x][y]=&Ser3;
                 }
                else if (x == J.GetPosisiX()&&y==J.GetPosisiY){
                   matrix2[x][y]=&J;
                 }
                else if (x == J2.GetPosisiX()&&y==J2.GetPosisiY){
                   matrix2[x][y]=&J2;
                 }
                else if (x == J3.GetPosisiX()&&y==J3.GetPosisiY){
                   matrix2[x][y]=&J3;
                 }
                else if (x == K.GetPosisiX()&&y==K.GetPosisiY){
                   matrix2[x][y]=&K;
                 }
                else if (x == K2.GetPosisiX()&&y==K2.GetPosisiY){
                   matrix2[x][y]=&K2;
                 }
                else if (x == K3.GetPosisiX()&&y==K3.GetPosisiY){
                   matrix2[x][y]=&K3;
                 }
                else if (x == W.GetPosisiX()&&y==W.GetPosisiY){
                   matrix2[x][y]=&W;
                 }
                else if (x == W2.GetPosisiX()&&y==W2.GetPosisiY){
                   matrix2[x][y]=&W2;
                 }
                else if (x == W3.GetPosisiX()&&y==W3.GetPosisiY){
                   matrix2[x][y]=&W3;
                 }
                else if (x == R.GetPosisiX()&&y==R.GetPosisiY){
                   matrix2[x][y]=&R;
                 }
                else if (x == R2.GetPosisiX()&&y==R2.GetPosisiY){
                   matrix2[x][y]=&R2;
                 }
                else if (x == R3.GetPosisiX()&&y==R3.GetPosisiY){
                   matrix2[x][y]=&R3;
                 }


        }
    }



    // insert singa
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

 //if (key[KEY_SPACE])
   //      cout<<"Space is pressed"<<endl;
/******************** DRAWING THE BOARD **************************/

    return 0;  // return 0 to the OS.
}
