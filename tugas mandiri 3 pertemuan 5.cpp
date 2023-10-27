#include <stdio.h>
#include <stdlib.h>

int main()
{   int iMasuk, iKeluar, iLama;
    long int iBiaya;
   
    printf("Menghitung Biaya Parkir\n\n");
    printf(" Jam Masuk : ");
    scanf("%d",&iMasuk);

    printf(" \nJam Keluar : ");
    scanf("%d",&iKeluar);
   
    if (iKeluar >= iMasuk)
          iLama = iKeluar - iMasuk;                                     
    else
          iLama = (12-iMasuk) + iKeluar;                  
   
    if (iLama > 2)
       iBiaya = 2000 + ((iLama - 2)*500);
    else
        iBiaya = 2000;
   
    printf("\n\n Biaya parkir adalah : Rp %d \n", iBiaya);
   
      system("PAUSE");
      return 0;
}

