#include "Hewan.h"
#include <iostream>

using namespace std;
class Karnivor : public Hewan{
  public:
   Karnivor();
   void move(){cout<<"bergerak"<<endl;}
   void kill(){cout<<"kill"<<endl;}
   void destruct(){cout<<"destruct"<<endl;}
   private:
    int id;

};
