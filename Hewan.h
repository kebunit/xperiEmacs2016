#include "Makhluk.h"

class Hewan : public Makhluk{
  public:
   virtual void move()=0;
   Hewan(){cout <<"ctor hewan"<<endl;}
  private:
   int ArahGerak;
};
