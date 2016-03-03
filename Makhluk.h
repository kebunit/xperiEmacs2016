#include <iostream>

using namespace std;
class Makhluk {

 public:
  virtual void kill()=0;
  virtual void destruct()=0;
  Makhluk(){cout<<"ctor makhluk"<<endl;}

 private:
   int Power;
   int PosisiAwal;
};
