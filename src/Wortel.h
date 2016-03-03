#include "Tumbuhan.h"

class Wortel : public Tumbuhan{
  public:
    Wortel(int Power,int Usia, int PosisiAwal, int Id);
    ~Wortel();
    void Kill(int id);
    void Destruct();
    void Seed();
    //void Pass();
  private:
    int Id;
};
