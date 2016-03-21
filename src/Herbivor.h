#include "Hewan.h"
#include <iostream>

using namespace std;
class Herbivor : public Hewan{
  public:
   //Karnivor();
  /* virtual void move(){cout<<"bergerak"<<endl;}
   virtual void kill(){cout<<"kill"<<endl;}
   virtual void destruct(){cout<<"destruct"<<endl;}*/
   virtual void Pass(Herbivor *H)=0;
   private:
   // int id;

};
