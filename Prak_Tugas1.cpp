#include <iostream>
#include <windows.h>
using namespace std;
int jeda = 350;

class Book{
  //atribut buku NaTaJuKoPen
  string Penulis;
  int Tahun;
  string Judul;
  string Kota;
  string Penerbit;
  int halaman;

public:
  //method
  void setAtr(string na, int ta, string ju, string ko, string pen, int hal){
    this->Penulis = na;
    this->Tahun = ta;
    this->Judul = ju;
    this->Kota = ko;
    this->Penerbit = pen;
    this->Halaman = hal;
  }
  
  void showAtr(){
    cout << "\n  Index buku ke-" << index+1 << endl; Sleep(jeda/8);
    cout << "\tPenulis  : " << this->Penulis << endl; Sleep(jeda/7);
    cout << "\tTahun    : " << this->Tahun << endl; Sleep(jeda/6);
    cout << "\tJudul    : " << this->Judul << endl; Sleep(jeda/5);
    cout << "\tKota     : " << this->Kota << endl; Sleep(jeda/4);
    cout << "\tPenerbit : " << this->Penerbit << endl; Sleep(jeda/3);
    cout << "\tHalaman  : " << this->Halaman << endl; Sleep(jeda/2);
    Sleep(jeda);
  }
};

void initTek(){ //kategori Teknologi
  Book Tek[5];
  Tek[0].setAtr("Penulis0", 2017, "Judul0", "Kota0", "Penerbit0", 0);
  Tek[1].setAtr("Penulis1", 2017, "Judul1", "Kota1", "Penerbit1", 1);
  Tek[2].setAtr("Penulis2", 2017, "Judul2", "Kota2", "Penerbit2", 2);
  Tek[3].setAtr("Penulis3", 2017, "Judul3", "Kota3", "Penerbit3", 3);
  Tek[4].setAtr("Penulis4", 2017, "Judul4", "Kota4", "Penerbit4", 4);
  cout << "Kategori Teknologi :";
  for (int i=0 ; i<5 ; i++){
    Tek[i].showAtr(i);
  }

void initFil(){ //kategori Filsafat
  
}
  
void initSej(){ //kategori Sejarah
  
}
  
void initAga(){ //kategori Agama
  
}
  
void initPsi(){ //kategori Psikologi

}
  
void initPol(){ //kategori Politik

}
  
void initFik(){ //kategori Fiksi

}
  
int main(){
 
  initTek();
  initFil();
  initSej();
  initAga();
  initPsi();
  initPol();
  initFik();
  
  return 0;
}
