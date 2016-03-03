#include "Herbivor.h"

class Jerapah : public Herbivor{
  public:
    Jerapah(int Power,int Usia, int PosisiAwal, int ArahGerak, int Id);
    ~Jerapah();
    void Kill(int id);
    void Destruct();
    void Move();
    void Pass();
  private:

};
