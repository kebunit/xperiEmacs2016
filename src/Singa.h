#include "Karnivor.h"

class Singa : public Karnivor{
  public:
    Singa(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id);
    ~Singa();

    int GetId();
    int GetUsia();
    int GetPosisi();
    int GetArahGerak();
    void SetArahGerak();
    void Kill(int _id);
    void Destruct();
    void Move();
    void Grouping();
  private:
    int Id;
};
