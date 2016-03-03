#include "Karnivor.h"

class Singa : public Karnivor{
  public:
  Singa();
    Singa(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id);
    ~Singa();
    int GetId();
    int GetUsia();
    int GetPosisi();
    int GetArahGerak();
    void SetArahGerak(int _ArahGerak);
    void SetPosisi(int _Posisi);
    void SetUsia(int _usia);
    void kill(int _id);
    void destruct();
    void move();
    void grouping();
    void fight(Karnivor *K);
  private:
    int Id;
};
