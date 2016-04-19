#include "Serigala.h"
#include <chrono>
#include <thread>


Serigala::Serigala(){
  Power=9;
  Usia=85;
  PosisiX = 2;
  PosisiY=2;
  ArahGerak = 2;
  Id = 1;

  cout <<"Power :"<<Power<<" Usia : "<<Usia<<" Posisi :"<<PosisiX<<" PosisiY :"<<PosisiY<<" ArahGerak: "<<ArahGerak<<" Id: "<<Id<<endl;
  cout <<"ctor"<<endl;

}

Serigala::Serigala(int _PosisiX,int _PosisiY, int _ArahGerak, int _Id){
  Power=9;
  Usia=85;
  PosisiX = _PosisiX;
  PosisiY = _PosisiY;
  ArahGerak = _ArahGerak;
  Id = _Id;

  cout <<"Power :"<<Power<<" Usia:"<<Usia<<", Posisi :"<<PosisiX<<" PosisiY :"<<PosisiY<<", ArahGerak: "<<ArahGerak<<", Id: "<<Id<<endl;
}

Serigala::~Serigala(){
  cout<<"Serigala Id: "<<Id<<" Telah meninggal"<<endl;
}

 void Serigala::kill(int _id){
   cout<<"Dummy kill, will implement thread to invoke other Makhluk destruct()"<<endl;
}

void Serigala::destruct(){
  //only implement death by age
  if (Usia == 0){
    this->~Serigala();
  }
}
void Serigala::move(){
    switch(this->ArahGerak){
    case 1:
      PosisiX = PosisiX+1 ;
      break;
  case 2:
    PosisiX = PosisiX+2 ;
    break;
  case 3:
    PosisiX = PosisiX+3 ;
    break;
  case 4:
    PosisiX = PosisiX+4 ;
    break;
    case -1:
      PosisiX = PosisiX-1 ;
      break;
  case -2:
    PosisiX = PosisiX-2 ;
    break;
  case -3:
    PosisiX = PosisiX-3 ;
    break;
  case -4:
    PosisiX = PosisiX-4 ;
    break;
    this_thread::sleep_for(chrono::milliseconds(2000));
}
}

void Serigala::fight(Karnivor *K){
  cout <<"will implemented with Serigala class using thread"<<endl;
}
void Serigala::grouping(){
  cout <<"will implemented with thread later"<<endl;
}

int Serigala::GetId(){
  return Id;
}
int Serigala::GetUsia(){
  return Usia;
}
int Serigala::GetPosisiX(){
  return PosisiX;
}
int Serigala::GetPosisiY(){
  return PosisiY;
}
void Serigala::SetPosisiX(int _PosisiX){
  PosisiX = _PosisiX;
}
void Serigala::SetPosisiY(int _PosisiY){
  PosisiY = _PosisiY;
}
int Serigala::GetArahGerak(){
  return ArahGerak;
}
void Serigala::SetArahGerak(int _ArahGerak){
  ArahGerak=_ArahGerak;
}


void Serigala::SetUsia(int _usia){
  Usia = _usia;
}

int Serigala::GetPower(){
  return Power;
}
