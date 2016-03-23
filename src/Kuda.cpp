#include "Kuda.h"
#include <chrono>
#include <thread>


Kuda::Kuda(){
  Power=7;
  Usia=75;
  PosisiX = 2;
  PosisiY=2;
  ArahGerak = 2;
  Id = 1;

  cout <<"Power :"<<Power<<" Usia : "<<Usia<<" PosisiX :"<<PosisiX<<" PosisiY :"<<PosisiY<<" ArahGerak: "<<ArahGerak<<" Id: "<<Id<<endl;
  cout <<"ctor"<<endl;

}

Kuda::Kuda(int _PosisiX,int _PosisiY, int _ArahGerak, int _Id){
  Power=7;
  Usia=75;
  PosisiX = _PosisiX;
  PosisiY = _PosisiY;
  ArahGerak = _ArahGerak;
  Id = _Id;

  cout <<"Power :"<<Power<<" Usia:"<<Usia<<", Posisi :"<<PosisiX<<" PosisiY :"<<PosisiY<<", ArahGerak: "<<ArahGerak<<"Id: "<<Id<<endl;
}

Kuda::~Kuda(){
  cout<<"Kuda Id: "<<Id<<" Telah meninggal"<<endl;
}

 void Kuda::kill(int _id){
   cout<<"Dummy kill, will implement thread to invoke other Makhluk destruct()"<<endl;
}

void Kuda::destruct(){
  //only implement death by age
  if (Usia == 0){
    this->~Kuda();
  }
}
void Kuda::move(){
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

void Kuda::Pass(Herbivor *K){
  cout <<"will implemented with Kuda class using thread"<<endl;
}
void Kuda::grouping(){
  cout <<"will implemented with thread later"<<endl;
}

int Kuda::GetId(){
  return Id;
}
int Kuda::GetUsia(){
  return Usia;
}
int Kuda::GetPosisiX(){
  return PosisiX;
}
int Kuda::GetPosisiY(){
  return PosisiY;
}
int Kuda::GetArahGerak(){
  return ArahGerak;
}
void Kuda::SetArahGerak(int _ArahGerak){
  ArahGerak=_ArahGerak;
}
void Kuda::SetPosisiX(int _PosisiX){
  PosisiX = _PosisiX;
}

void Kuda::SetPosisiY(int _PosisiY){
  PosisiY= _PosisiY;
}
void Kuda::SetUsia(int _usia){
  Usia = _usia;
}

int Kuda::GetPower(){
  return Power;
}
/*
int main(){
  cout <<"Ini Kuda S -> ";
  Kuda S;
  cout<<"Ini Kuda S1 -> ";
  Kuda S1(10,10,2,2,2);
  cout <<"Simulasi meninggal karena usia, Subjek percobaan : Kuda S1"<<endl;
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
  cout<<"Simulasi Bergerak, Subjek Percobaan : Kuda S"<<endl;
  for (int i = 0; i<5;i++){
    S.move();
    cout<<"Posisi S: "<<S.GetPosisi()<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
  }

  return 0;
}*/
