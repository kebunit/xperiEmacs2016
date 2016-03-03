#include "Karnivor.h"

class Serigala : public Karnivor{
  public:
    Serigala(int Power,int Usia, int PosisiAwal, int ArahGerak, int Id);
    ~Serigala();
    void Kill(int id);
    void Destruct();
    void Move();
    void Grouping();
  private:

};
