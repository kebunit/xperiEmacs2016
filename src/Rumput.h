
/**
 *  Kelas yang merepresantikan Rumput dan beberapa sifatnya
 */

#include "Tumbuhan.h"

class Rumput : public Tumbuhan{
      /**
     * Public Method that implement virtual function from parents class
     */
 public:
  Rumput();    /**
     * Standard constructor, give default value of power, usia, posisi, arahgerak, id
     */
    Rumput(int _Power,int _Usia, int _Posisi,int _Id);    /**
     * Params constructor where you have to give all the parameter manually
     */
    ~Rumput();    /**
     * destructor, no delete[] because there's no pointer data.
     */
    int GetId();    /**
     * Return Id of a Rumput
     */
    int GetUsia();    /**
     * Return Usia of Rumput
     */
    int GetPosisi();    /**
     * Return Posisi of Rumput
     */
    void SetPosisi(int _Posisi);    /**
     * Set Posisi of Rumput
     */
    void SetUsia(int _usia);
    void kill(int _id);    /**
     * Kill other creature, invoke other creature destruct()
     */
    void destruct();    /**
     * Destruct because death by age or killed by other creature
     */
        void Seed();    /**
     * when Rumput meet other Tumbuhan that isn't Rumput, they'll fight
     */
  private:
    int Id;    /**
     *Unique id of Rumput
     */
};
