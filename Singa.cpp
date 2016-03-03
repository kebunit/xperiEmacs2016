#include "Singa.h"
#include <chrono>
#include <thread>


Singa::Singa(){
  Power = 10;
  Usia = 10;
  Posisi = 2;
  ArahGerak = 2;
  Id = 1;

  cout <<"Power :"<<Power<<" Usia:"<<Usia<<"Posisi :"<<Posisi<<"ArahGerak: "<<ArahGerak<<"Id: "<<Id<<endl;
  cout <<"ctor"<<endl;

}

Singa::Singa(int _Power,int _Usia, int _Posisi, int _ArahGerak, int _Id){
  Power = _Power;
  Usia = _Usia;
  Posisi = _Posisi;
  ArahGerak = _ArahGerak;
  Id = _Id;

  cout <<"Power :"<<Power<<" Usia:"<<Usia<<"Posisi :"<<Posisi<<"ArahGerak: "<<ArahGerak<<"Id: "<<Id<<endl;
}

Singa::~Singa(){
  cout<<"Singa Id: "<<Id<<" Telah meninggal"<<endl;
}
 void Singa::kill(int _id){
   cout<<"Dummy kill, will implement thread to invoke other Makhluk destruct()"<<endl;
}

void Singa::destruct(){
  //only implement death by age
  if (Usia == 0){
    this->~Singa();
  }
}
void Singa::move(){

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

void Singa::fight(Karnivor *K){
  cout <<"will implemented with Serigala class using thread"<<endl;
}
void Singa::grouping(){
  cout <<"will implemented with thread later"<<endl;
}

int Singa::GetId(){
  return Id;
}
int Singa::GetUsia(){
  return Usia;
}
int Singa::GetPosisi(){
  return Posisi;
}
int Singa::GetArahGerak(){
  return ArahGerak;
}
void Singa::SetArahGerak(int _ArahGerak){
  ArahGerak=_ArahGerak;
}
void Singa::SetPosisi(int _Posisi){
  Posisi = _Posisi;
}

void Singa::SetUsia(int _usia){
  Usia = _usia;
}

int main(){
  cout <<"Ini singa S -> ";
  Singa S;
  cout<<"Ini Singa S1 -> ";
  Singa S1(10,10,2,2,2);
  cout <<"Simulasi meninggal karena usia, Subjek percobaan : Singa S1"<<endl;
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
  cout<<"Simulasi Bergerak, Subjek Percobaan : Singa S"<<endl;
  for (int i = 0; i<5;i++){
    S.move();
    cout<<"Posisi S: "<<S.GetPosisi()<<endl;
    this_thread::sleep_for(chrono::milliseconds(1000));
  }

  return 0;
}
