
/**
 *  Kelas yang merepresantikan Wortel dan beberapa sifatnya
 */

#include "Tumbuhan.h"

class Wortel : public Tumbuhan{
      /**
     * Public Method that implement virtual function from parents class
     */
 public:
  Wortel();    /**
     * Standard constructor, give default value of power, usia, posisi, arahgerak, id
     */
    Wortel(int _PosisiX,int _PosisiY,int _Id);    /**
     * Params constructor where you have to give all the parameter manually
     */
    ~Wortel();    /**
     * destructor, no delete[] because there's no pointer data.
     */
    int GetId();    /**
     * Return Id of a Wortel
     */
    int GetUsia();    /**
     * Return Usia of Wortel
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
    void SetUsia(int _usia);
    void kill(int _id);    /**
     * Kill other creature, invoke other creature destruct()
     */
    void destruct();    /**
     * Destruct because death by age or killed by other creature
     */
        void Seed();    /**
     * when Wortel meet other Tumbuhan that isn't Wortel, they'll fight
     */
      int GetPower();
  private:
    int Id;    /**
     *Unique id of Wortel
     */
};
