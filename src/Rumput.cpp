#include "Rumput.h"
#include <chrono>
#include <thread>


Rumput::Rumput(){
  Power = 10;
  Usia = 10;
  Posisi = 2;
  //ArahGerak = 2;
  Id = 1;

  cout <<"Power :"<<Power<<" Usia : "<<Usia<<" Posisi :"<<Posisi<<" Id: "<<Id<<endl;
  cout <<"ctor"<<endl;

}

Rumput::Rumput(int _Power,int _Usia, int _Posisi, int _Id){
  Power = _Power;
  Usia = _Usia;
  Posisi = _Posisi;
//  ArahGerak = _ArahGerak;
  Id = _Id;

  cout <<"Power :"<<Power<<" Usia:"<<Usia<<"Posisi :"<<Posisi<<"Id: "<<Id<<endl;
}

Rumput::~Rumput(){
  cout<<"Rumput Id: "<<Id<<" Telah meninggal"<<endl;
}

 void Rumput::kill(int _id){
   cout<<"Dummy kill, will implement thread to invoke other Makhluk destruct()"<<endl;
}

void Rumput::destruct(){
  //only implement death by age
  if (Usia == 0){
    this->~Rumput();
  }
}


int Rumput::GetId(){
  return Id;
}
int Rumput::GetUsia(){
  return Usia;
}
int Rumput::GetPosisi(){
  return Posisi;
}
void Rumput::SetPosisi(int _Posisi){
  Posisi = _Posisi;
}

void Rumput::SetUsia(int _usia){
  Usia = _usia;
}

int main(){
  cout <<"Ini Rumput S -> ";
  Rumput S;
  cout<<"Ini Rumput S1 -> ";
  Rumput S1(10,10,2,2,2);
  cout <<"Simulasi meninggal karena usia, Subjek percobaan : Rumput S1"<<endl;
  for (int j = 0; j< 12;j++){
    if (S1.GetUsia() != 0){
          this_thread::sleep_for(chrono::milliseconds(1000));
          S1.SetUsia(S1.GetUsia()-1);
          cout<<"Usia S1 : "<<S1.GetUsia()<<endl;
    }
    else {
      cout<<"Meninggal Karena Usia"<<endl;
      S1.destruct();
}
  }

  return 0;
}
