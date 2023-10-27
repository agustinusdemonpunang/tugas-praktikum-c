#include <stdio.h>
#include <stdlib.h>
 
int main()
{   int iMasuk, iKeluar, iLama;
 
    printf("Menentukan lama bekerja\n\n");
    printf(" Jam Masuk : ");
    scanf("%d",&iMasuk);
 
    printf(" \nJam Keluar : ");
    scanf("%d",&iKeluar);
 
    if (iKeluar >= iMasuk)
          iLama = iKeluar - iMasuk;
    else
          iLama = (12-iMasuk) + iKeluar;
 
    printf("\n\n Lama bekerja adalah : %d Jam\n", iLama);
 
      system("PAUSE");
      return 0;
}

