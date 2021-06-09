
#include <stdio.h> 
#include <math.h>

void main()
{
  float sudut, // Sudut Penembakan
         kecepatan, // Kecepatan Penembakan
         rad, // Sudut dalam Radian
        jarak, derajat;

  const float PHI = 3.14;
  const float GRAVITASI = 9.8;

  printf ("Menghitung Tinggi Maksimum Peluru");
  printf ("Masukkan Sudut Penembakan (derajat) = ");
  scanf ("%d", &sudut);
  
  printf ("Masukkan Kecepatan Tembak (m/second) = ");
  scanf ("%d",&kecepatan);

  //menghitung jarak jatuh peluru
  rad = sudut * PHI / 180;
  tinggi = pow(kecepatan, 2) *pow(sin(rad),2) / 2*GRAVITASI;

  printf ("Jadi tinggi maksimum peluru = %d meter", &tinggi);
  getch();
}

