#include "Karnivor.h"
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <random>

Karnivor::Karnivor(){cout << "ctor karnivor"<<endl;}

int main() {
  random_device rd; // obtain a random number from hardware
              mt19937 eng(rd()); // seed the generator
              uniform_int_distribution<> distr(0, 60); // define the range
  while (true){
              cout<<"tes"<<endl;
              cout<<rand()<<endl;


   // for(int n=0; n<40; ++n)
              cout << distr(eng) << ' '<<endl; // generate numbers
              //Sleep(2000);
              this_thread::sleep_for(chrono::milliseconds(2000));
        }
}
