
/**
 *  Kelas yang merepresantikan Jerapah dan beberapa sifatnya
 */

#include "Herbivor.h"

class Jerapah : public Herbivor{
      /**
     * Public Method that implement virtual function from parents class
     */
 public:
  Jerapah();    /**
     * Standard constructor, give default value of power, usia, posisi, arahgerak, id
     */
    Jerapah(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id);    /**
     * Params constructor where you have to give all the parameter manually
     */
    ~Jerapah();    /**
     * destructor, no delete[] because there's no pointer data.
     */
    int GetId();    /**
     * Return Id of a Jerapah
     */
    int GetUsia();    /**
     * Return Usia of Jerapah
     */
    int GetPosisi();    /**
     * Return Posisi of Jerapah
     */
    int GetArahGerak();    /**
     * Return ArahGerak of Jerapah
     */
    void SetArahGerak(int _ArahGerak);    /**
     * change ArahGerak, will be useful for fight() function
     */
    void SetPosisi(int _Posisi);    /**
     * Set Posisi of Jerapah
     */
    void SetUsia(int _usia);
    void kill(int _id);    /**
     * Kill other creature, invoke other creature destruct()
     */
    void destruct();    /**
     * Destruct because death by age or killed by other creature
     */
    void move();    /**
     * Move the Jerapah
     */
    void grouping();    /**
     * When Jerapah meet other Jerapah, they'll form a group
     */
    void Pass(Herbivor *K);    /**
     * when Jerapah meet other Herbivor that isn't Jerapah, they'll fight
     */
  private:
    int Id;    /**
     *Unique id of Jerapah
     */
};
