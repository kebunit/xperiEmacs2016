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
#include <stdio.h>
#include <sys/ioctl.h> // For FIONREAD
#include <termios.h>
#include <stdbool.h>
#include <unistd.h>
//#include <iostream>
#include <cstdlib>
//#include <stdlib.h>
//#include <allegro.h>

using namespace std;

int kbhit(void) {
    static bool initflag = false;
    static const int STDIN = 0;

    if (!initflag) {
        // Use termios to turn off line buffering
        struct termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initflag = true;
    }

    int nbbytes;
    ioctl(STDIN, FIONREAD, &nbbytes);  // 0 is STDIN
    return nbbytes;
}
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
if (panjang <100){

  cout<<"kecil"<<endl;
  char matrix [panjang][lebar];
  Singa Sin ( 1, 0, 1, rand()%100);
  Singa Sin2 ( 2, 3, 3, rand()%100);
  Singa Sin3 ( 3, 5, 2, rand()%100);

  Serigala Ser ( 4, 3, -1, rand()%100);
  Serigala Ser2 ( 5, 9, -4, rand()%100);
  Serigala Ser3 ( 6, 7, -3, rand()%100);

  Jerapah  J ( 7, 9, 2, rand()%100);
  Jerapah  J2 ( 8, 6, 1, rand()%100);
  Jerapah  J3 ( 9, 3, 3, rand()%100);
  Kuda K ( 10, 1, -2, rand()%100);
  Kuda K2 ( 9, 2, -1, rand()%100);
   Kuda K3 ( 8, 3, -1, rand()%100);
  Wortel W ( 7, 8, rand()%100);
  Wortel W2 ( 6, 6, rand()%100);
  Wortel W3 ( 5, 5, rand()%100);
  Rumput R( 4, 2, rand()%100);
  Rumput R2( 3, 1, rand()%100);
  Rumput R3( 2, 2, rand()%100);
  Makhluk* matrix2[panjang][lebar];

char c;
while (c!='l'&&Sin.GetUsia()>0) {
        if (kbhit()) { c = getchar(); }
        
        if (c=='l') {
            exit(0);
        } else { // untuk Selain l dan s
            // selain s dan l 

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
                         if (x == Sin.GetPosisiX()&&y==Sin.GetPosisiY()){
                           matrix2[x][y]=&Sin;
                         }
                           else if (x == Sin2.GetPosisiX()&&y==Sin2.GetPosisiY()){
                             matrix2[x][y]=&Sin2;
                           }
                          else if (x == Sin3.GetPosisiX()&&y==Sin3.GetPosisiY()){
                             matrix2[x][y]=&Sin3;
                           }
                          else if (x == Ser.GetPosisiX()&&y==Ser.GetPosisiY()){
                             matrix2[x][y]=&Ser;
                           }
                                     else if (x == Ser2.GetPosisiX()&&y==Ser2.GetPosisiY()){
                             matrix2[x][y]=&Ser2;
                           }
                                     else if (x == Ser3.GetPosisiX()&&y==Ser3.GetPosisiY()){
                             matrix2[x][y]=&Ser3;
                           }
                                     else if (x == J.GetPosisiX()&&y==J.GetPosisiY()){
                             matrix2[x][y]=&J;
                           }
                           else if (x == J2.GetPosisiX()&&y==J2.GetPosisiY()){
                   matrix2[x][y]=&J2;
                 }
                 else if (x == J3.GetPosisiX()&&y==J3.GetPosisiY()){
            matrix2[x][y]=&J3;
            }
            else if (x == K.GetPosisiX()&&y==K3.GetPosisiY()){
            matrix2[x][y]=&K;
            }
            else if (x == K2.GetPosisiX()&&y==K2.GetPosisiY()){
            matrix2[x][y]=&K2;
            }
            else if (x == K3.GetPosisiX()&&y==K3.GetPosisiY()){
            matrix2[x][y]=&K3;
            }
            else if (x == W.GetPosisiX()&&y==W.GetPosisiY()&&W.GetUsia()>0){
            matrix2[x][y]=&W;
            }
            else if (x == W2.GetPosisiX()&&y==W2.GetPosisiY()&&W2.GetUsia()>0){
            matrix2[x][y]=&W2;
            }
            else if (x == W3.GetPosisiX()&&y==W3.GetPosisiY()&&W3.GetUsia()>0){
            matrix2[x][y]=&W3;
            }
            else if (x == R.GetPosisiX()&&y==R.GetPosisiY()&&R.GetUsia()>0){
            matrix2[x][y]=&R;
            }
            else if (x == R2.GetPosisiX()&&y==R2.GetPosisiY()&&R2.GetUsia()>0){
            matrix2[x][y]=&R2;
            }
            else if (x == R3.GetPosisiX()&&y==R3.GetPosisiY()&&R3.GetUsia()>0){
            matrix2[x][y]=&R3;
            }
            }
            else{
            if (x == Sin.GetPosisiX()&&y==Sin.GetPosisiY()&&Sin.GetPower()>=matrix2[x][y]->GetPower()){
              matrix2[x][y]=&Sin;
            }
            else   if (x == Sin.GetPosisiX()&&y==Sin.GetPosisiY()&&Sin.GetPower()<matrix2[x][y]->GetPower()){
                //matrix2[x][y]=&Sin;
              }
              else if (x == Sin2.GetPosisiX()&&y==Sin2.GetPosisiY()&&Sin2.GetPower()>=matrix2[x][y]->GetPower()){
                matrix2[x][y]=&Sin2;
              }
              else if (x == Sin2.GetPosisiX()&&y==Sin2.GetPosisiY()&&Sin2.GetPower()<matrix2[x][y]->GetPower()){
                //matrix2[x][y]=&Sin2;
              }
             else if (x == Sin3.GetPosisiX()&&y==Sin3.GetPosisiY()&&Sin3.GetPower()>=matrix2[x][y]->GetPower()){
                matrix2[x][y]=&Sin3;
              }
              else if (x == Sin3.GetPosisiX()&&y==Sin3.GetPosisiY()&&Sin3.GetPower()<matrix2[x][y]->GetPower()){
                // matrix2[x][y]=&Sin3;
               }
             else if (x == Ser.GetPosisiX()&&y==Ser.GetPosisiY()&&Ser.GetPower()>=matrix2[x][y]->GetPower()){
                matrix2[x][y]=&Ser;
              }
              else if (x == Ser.GetPosisiX()&&y==Ser.GetPosisiY()&&Ser.GetPower()<matrix2[x][y]->GetPower()){
                 //matrix2[x][y]=&Ser;
               }
                        else if (x == Ser2.GetPosisiX()&&y==Ser2.GetPosisiY()&&Ser2.GetPower()>=matrix2[x][y]->GetPower()){
                matrix2[x][y]=&Ser2;
              }
              else if (x == Ser2.GetPosisiX()&&y==Ser2.GetPosisiY()&&Ser2.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&Ser2;
            }
                        else if (x == Ser3.GetPosisiX()&&y==Ser3.GetPosisiY()&&Ser3.GetPower()>=matrix2[x][y]->GetPower()){
                matrix2[x][y]=&Ser3;
              }
              else if (x == Ser3.GetPosisiX()&&y==Ser3.GetPosisiY()&&Ser3.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&Ser3;
            }
                        else if (x == J.GetPosisiX()&&y==J.GetPosisiY()&&J.GetPower()>=matrix2[x][y]->GetPower()){
                matrix2[x][y]=&J;
              }
              else if (x == J.GetPosisiX()&&y==J.GetPosisiY()&&J.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&J;
            }
              else if (x == J2.GetPosisiX()&&y==J2.GetPosisiY()&&Sin.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&J2;
            }
            else if (x == J2.GetPosisiX()&&y==J2.GetPosisiY()&&Sin.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&J2;
            }
            else if (x == J3.GetPosisiX()&&y==J3.GetPosisiY()&&J3.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&J3;
            }
            else if (x == J3.GetPosisiX()&&y==J3.GetPosisiY()&&J3.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&J3;
            }
            else if (x == K.GetPosisiX()&&y==K.GetPosisiY()&&K.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&K;
            }
            else if (x == K.GetPosisiX()&&y==K.GetPosisiY()&&K.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&K;
            }
            else if (x == K2.GetPosisiX()&&y==K2.GetPosisiY()&&K2.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&K2;
            }
            else if (x == K2.GetPosisiX()&&y==K2.GetPosisiY()&&K2.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&K2;
            }
            else if (x == K3.GetPosisiX()&&y==K3.GetPosisiY()&&K3.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&K3;
            }
            else if (x == K3.GetPosisiX()&&y==K3.GetPosisiY()&&K3.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&K3;
            }
            else if (x == W.GetPosisiX()&&y==W.GetPosisiY()&&W.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&W;
            }
            else if (x == W.GetPosisiX()&&y==W.GetPosisiY()&&W.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&W;
            }
            else if (x == W2.GetPosisiX()&&y==W2.GetPosisiY()&&W2.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&W2;
            }
            else if (x == W2.GetPosisiX()&&y==W2.GetPosisiY()&&W2.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&W2;
            }
            else if (x == W3.GetPosisiX()&&y==W3.GetPosisiY()&&W3.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&W3;
            }
            else if (x == W3.GetPosisiX()&&y==W3.GetPosisiY()&&W3.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&W3;
            }

            else if (x == R.GetPosisiX()&&y==R.GetPosisiY()&&R.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&R;
            }
            else if (x == R.GetPosisiX()&&y==R.GetPosisiY()&&R.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&R;
            }
            else if (x == R2.GetPosisiX()&&y==R2.GetPosisiY()&&R2.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&R2;
            }
            else if (x == R2.GetPosisiX()&&y==R2.GetPosisiY()&&R2.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&R2;
            }
            else if (x == R3.GetPosisiX()&&y==R3.GetPosisiY()&&R3.GetPower()>=matrix2[x][y]->GetPower()){
            matrix2[x][y]=&R3;
            }
            else if (x == R3.GetPosisiX()&&y==R3.GetPosisiY()&&R3.GetPower()<matrix2[x][y]->GetPower()){
            //matrix2[x][y]=&R3;
            }
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

              for (int c=0;c<3;c++){
                cout<<endl;
              }

            Sin.move();
            Sin2.move();
            Sin3.move();
            Ser.move();
            Ser2.move();
            Ser3.move();
            J.move();
            J2.move();
            J3.move();
            K.move();
            K2.move();
            K3.move();
            W.SetUsia(1);
            W2.SetUsia(1);
            W3.SetUsia(1);
            R.SetUsia(1);
            R2.SetUsia(1);
            R3.SetUsia(1);
            J.SetUsia(1);
            J2.SetUsia(1);
            J3.SetUsia(1);
            K.SetUsia(1);
            K2.SetUsia(1);
            K3.SetUsia(1);
            Sin.SetUsia(1);
            Sin2.SetUsia(1);
            Sin3.SetUsia(1);
            Ser.SetUsia(1);
            Ser2.SetUsia(1);
            Ser3.SetUsia(1);

            this_thread::sleep_for(chrono::milliseconds(2000));
            system("clear");
        }

        // untuk S
        if (c=='s') {
            // do something
            this_thread::sleep_for(chrono::milliseconds(8000));
            freopen("output.txt", "w", stdout);
        }
    }
 }//end if panjang>10

 return 0;  // return 0 to the OS.
   }

 //if (key[KEY_SPACE])
   //      cout<<"Space is pressed"<<endl;
/******************** DRAWING THE BOARD **************************/
