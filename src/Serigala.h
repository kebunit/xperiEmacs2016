
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
    Serigala(int _PosisiX,int _PosisiY, int _ArahGerak, int _Id);    /**
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
     int GetPosisiX();    /**
      * Return Posisi of Jerapah
      */
      int GetPosisiY();    /**
       * Return Posisi of Jerapah
       */
    void SetPosisiX(int _PosisiX);    /**
     * Set Posisi of Jerapah
     */
     void SetPosisiY(int _PosisiY);    /**
      * Set Posisi of Jerapah*/
    int GetArahGerak();    /**
     * Return ArahGerak of Serigala
     */
    void SetArahGerak(int _ArahGerak);    /**
     * change ArahGerak, will be useful for fight() function
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
      int GetPower();
  private:
    int Id;    /**
     *Unique id of Serigala
     */
};
