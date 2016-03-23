

#include "Makhluk.h"
#ifndef HEWAN_H
#define HEWAN_H
class Hewan : public Makhluk{
  public:
  //Hewan();
   virtual void move()=0;
   virtual void grouping()=0;
 //  Hewan(){cout <<"ctor hewan"<<endl;}
  protected:
   int ArahGerak;
};
#endif
