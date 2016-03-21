
/**
 *  Kelas yang merepresantikan Kuda dan beberapa sifatnya
 */

#include "Herbivor.h"

class Kuda : public Herbivor{
      /**
     * Public Method that implement virtual function from parents class
     */
 public:
  Kuda();    /**
     * Standard constructor, give default value of power, usia, posisi, arahgerak, id
     */
    Kuda(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id);    /**
     * Params constructor where you have to give all the parameter manually
     */
    ~Kuda();    /**
     * destructor, no delete[] because there's no pointer data.
     */
    int GetId();    /**
     * Return Id of a Kuda
     */
    int GetUsia();    /**
     * Return Usia of Kuda
     */
    int GetPosisi();    /**
     * Return Posisi of Kuda
     */
    int GetArahGerak();    /**
     * Return ArahGerak of Kuda
     */
    void SetArahGerak(int _ArahGerak);    /**
     * change ArahGerak, will be useful for fight() function
     */
    void SetPosisi(int _Posisi);    /**
     * Set Posisi of Kuda
     */
    void SetUsia(int _usia);
    void kill(int _id);    /**
     * Kill other creature, invoke other creature destruct()
     */
    void destruct();    /**
     * Destruct because death by age or killed by other creature
     */
    void move();    /**
     * Move the Kuda
     */
    void grouping();    /**
     * When Kuda meet other Kuda, they'll form a group
     */
    void Pass(Herbivor *K);    /**
     * when Kuda meet other Herbivor that isn't Kuda, they'll fight
     */
  private:
    int Id;    /**
     *Unique id of Kuda
     */
};
