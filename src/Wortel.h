
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
    Wortel(int _Power,int _Usia, int _Posisi,int _Id);    /**
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
    int GetPosisi();    /**
     * Return Posisi of Wortel
     */
    void SetPosisi(int _Posisi);    /**
     * Set Posisi of Wortel
     */
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
  private:
    int Id;    /**
     *Unique id of Wortel
     */
};
