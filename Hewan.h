#include "Makhluk.h"

class Hewan : public Makhluk{
  public:
   virtual void move()=0;
   virtual void grouping()=0;
 //  Hewan(){cout <<"ctor hewan"<<endl;}
  protected:
   int ArahGerak;
};
