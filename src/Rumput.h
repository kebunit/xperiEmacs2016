#include "Tumbuhan.h"

class Rumput : public Tumbuhan{
  public:
    Tumbuhan(int Power,int Usia, int PosisiAwal, int Id);
    ~Tumbuhan();
    void Kill(int id);
    void Destruct();
    void Seed();
    //void Pass();
  private:
    int Id;
};
