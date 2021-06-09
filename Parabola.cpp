
#include <conio.h>
#include <stdio.h> 
#include <math.h>

void main()
{
  float sudut, // Sudut Penembakan
         kecepatan, // Kecepatan Penembakan
         rad, // Sudut dalam Radian
        jarak;

  const float PHI = 3.14;
  const float GRAVITASI = 9.8;

  clrscr();

  cout<<"Menghitung Jarak Jatuh Peluru"<<endl<<endl;
  cout<<"Masukkan Sudut Penambakan (derajat) = ";
  cin>>sudut;
  cout<<"Masukkan Kecepatan Tembak (m/second) = ";
  cin>>kecepatan;

  //menghitung jarak jatuh peluru
  rad = sudut * PHI / 180;
  jarak = 2 * pow(kecepatan, 2) *pow(sin(rad),2) / 2*GRAVITASI;

  cout<<"Jadi, Peluru Jatuh pada Jarak = "<<jarak<<" meter"<<endl;
  getch();
}

