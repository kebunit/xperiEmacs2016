#include "Karnivor.h"

class Singa : public Karnivor{
  public:
    Singa(int Power,int Usia, int PosisiAwal, int ArahGerak, int Id);
    ~Singa();
    void Kill(int id);
    void Destruct();
    void Move();
    void Grouping();
  private:

};
