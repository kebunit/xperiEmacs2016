
/**
 *  Kelas yang merepresantikan Serigala dan beberapa sifatnya
 */

#include "Karnivor.h"

class Serigala : public Karnivor{
      /**
     * Public Method that implement virtual function from parents class
     */
 public:
  Serigala();    /**
     * Standard constructor, give default value of power, usia, posisi, arahgerak, id
     */
    Serigala(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id);    /**
     * Params constructor where you have to give all the parameter manually
     */
    ~Serigala();    /**
     * destructor, no delete[] because there's no pointer data.
     */
    int GetId();    /**
     * Return Id of a Serigala
     */
    int GetUsia();    /**
     * Return Usia of Serigala
     */
    int GetPosisi();    /**
     * Return Posisi of Serigala
     */
    int GetArahGerak();    /**
     * Return ArahGerak of Serigala
     */
    void SetArahGerak(int _ArahGerak);    /**
     * change ArahGerak, will be useful for fight() function
     */
    void SetPosisi(int _Posisi);    /**
     * Set Posisi of Serigala
     */
    void SetUsia(int _usia);
    void kill(int _id);    /**
     * Kill other creature, invoke other creature destruct()
     */
    void destruct();    /**
     * Destruct because death by age or killed by other creature
     */
    void move();    /**
     * Move the Serigala
     */
    void grouping();    /**
     * When Serigala meet other Serigala, they'll form a group
     */
    void fight(Karnivor *K);    /**
     * when Serigala meet other karnivor that isn't Serigala, they'll fight
     */
  private:
    int Id;    /**
     *Unique id of Serigala
     */
};
