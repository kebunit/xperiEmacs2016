#include <iostream>

using namespace std;
class Makhluk {

 public:
  virtual void kill(int _id)=0;
  virtual void destruct()=0;
  //virtual void RandomizePosition()=0;
 // Makhluk(){cout<<"ctor makhluk"<<endl;}

 protected:
   int Power;
   int Posisi;
   int Usia;
};
