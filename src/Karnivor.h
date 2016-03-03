#include "Hewan.h"
#include <iostream>

using namespace std;
class Karnivor : public Hewan{
  public:
   Karnivor();
  /* virtual void move(){cout<<"bergerak"<<endl;}
   virtual void kill(){cout<<"kill"<<endl;}
   virtual void destruct(){cout<<"destruct"<<endl;}*/
   virtual void fight()=0;
   private:
   // int id;

};
