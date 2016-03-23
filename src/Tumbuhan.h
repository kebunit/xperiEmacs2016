#include "Makhluk.h"

#ifndef TUMBUHAN_H
#define TUMBUHAN_H
class Tumbuhan : public Makhluk{
  public:
   //virtual void move()=0;
   virtual void Seed()=0;
   //Hewan(){cout <<"ctor hewan"<<endl;}
  private:
   //int ArahGerak;
};
#endif
