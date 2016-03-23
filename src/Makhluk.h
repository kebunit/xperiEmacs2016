#include <iostream>

using namespace std;
#ifndef MAKHLUK_H
#define MAKHLUK_H
class Makhluk {

 public:
  //Makhluk();
  virtual void kill(int _id)=0;
  virtual void destruct()=0;
  virtual int GetId()=0;
  virtual int GetPosisiX()=0;    /**
   * Return Posisi of Kuda
   */
   virtual int GetPosisiY()=0;    /**
    * Return Posisi of Kuda
    */
    virtual void SetPosisiX(int _PosisiX)=0;    /**
     * Set Posisi of Kuda
     */
     virtual void SetPosisiY(int _PosisiY)=0;    /**
      * Set Posisi of Kuda
      */
      virtual int GetUsia()=0;    /**
       * Return Usia of Kuda
       */
       virtual int GetPower()=0;
  //virtual void RandomizePosition()=0;
 // Makhluk(){cout<<"ctor makhluk"<<endl;}

 protected:
   int Power;
   int PosisiX;
   int PosisiY;
   int Usia;
};
#endif
