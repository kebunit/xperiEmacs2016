#include "Jerapah.h"
#include <chrono>
#include <thread>


Jerapah::Jerapah(){
  Power = 10;
  Usia = 10;
  Posisi = 2;
  ArahGerak = 2;
  Id = 1;

  cout <<"Power :"<<Power<<" Usia : "<<Usia<<" Posisi :"<<Posisi<<" ArahGerak: "<<ArahGerak<<" Id: "<<Id<<endl;
  cout <<"ctor"<<endl;

}

Jerapah::Jerapah(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id){
  Power = _Power;
  Usia = _Usia;
  Posisi = _Posisi;
  ArahGerak = _ArahGerak;
  Id = _Id;

  cout <<"Power :"<<Power<<" Usia:"<<Usia<<"Posisi :"<<Posisi<<"ArahGerak: "<<ArahGerak<<"Id: "<<Id<<endl;
}

Jerapah::~Jerapah(){
  cout<<"Jerapah Id: "<<Id<<" Telah meninggal"<<endl;
}

 void Jerapah::kill(int _id){
   cout<<"Dummy kill, will implement thread to invoke other Makhluk destruct()"<<endl;
}

void Jerapah::destruct(){
  //only implement death by age
  if (Usia == 0){
    this->~Jerapah();
  }
}
void Jerapah::move(){
    switch(this->ArahGerak){
    case 1:
      Posisi = Posisi+1 ;
      break;
  case 2:
    Posisi = Posisi+2 ;
    break;
  case 3:
    Posisi = Posisi+3 ;
    break;
  case 4:
    Posisi = Posisi+4 ;
    break;
    case -1:
      Posisi = Posisi-1 ;
      break;
  case -2:
    Posisi = Posisi-2 ;
    break;
  case -3:
    Posisi = Posisi-3 ;
    break;
  case -4:
    Posisi = Posisi-4 ;
    break;
    this_thread::sleep_for(chrono::milliseconds(2000));
}
}

void Jerapah::Pass(Herbivor *K){
  cout <<"will implemented with Jerapah class using thread"<<endl;
}
void Jerapah::grouping(){
  cout <<"will implemented with thread later"<<endl;
}

int Jerapah::GetId(){
  return Id;
}
int Jerapah::GetUsia(){
  return Usia;
}
int Jerapah::GetPosisi(){
  return Posisi;
}
int Jerapah::GetArahGerak(){
  return ArahGerak;
}
void Jerapah::SetArahGerak(int _ArahGerak){
  ArahGerak=_ArahGerak;
}
void Jerapah::SetPosisi(int _Posisi){
  Posisi = _Posisi;
}

void Jerapah::SetUsia(int _usia){
  Usia = _usia;
}

int main(){
  cout <<"Ini Jerapah S -> ";
  Jerapah S;
  cout<<"Ini Jerapah S1 -> ";
  Jerapah S1(10,10,2,2,2);
  cout <<"Simulasi meninggal karena usia, Subjek percobaan : Jerapah S1"<<endl;
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
  cout<<"Simulasi Bergerak, Subjek Percobaan : Jerapah S"<<endl;
  for (int i = 0; i<5;i++){
    S.move();
    cout<<"Posisi S: "<<S.GetPosisi()<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
  }

  return 0;
}
