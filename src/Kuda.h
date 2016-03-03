#include "Herbivor.h"

class Kuda : public Herbivor{
  public:
    Kuda(int Power,int Usia, int PosisiAwal, int ArahGerak, int Id);
    ~Kuda();
    void Kill(int id);
    void Destruct();
    void Move();
    void Pass();
  private:

};
