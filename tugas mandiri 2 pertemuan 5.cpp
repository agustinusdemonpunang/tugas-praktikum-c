#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{   int iKode,iDiskon;
    char cJenis;
    long int iHarga, iHDiskon;
   
    printf(" Jenis : ");
    scanf("%c",&cJenis);

    printf(" Kode : ");
    scanf("%d",&iKode);
   
    printf(" Harga : ");
    scanf("%d",&iHarga);
   
    switch (cJenis)
    { case 'A':
             iDiskon=10;
             iHDiskon = 0.9 * iHarga;            
             break;
      case 'B':            
             iDiskon=15;
             iHDiskon = 0.85 * iHarga;            
             break;
      case 'C':
             iDiskon=20;
             iHDiskon = 0.8 * iHarga;            
             break;
      default:
              printf("inputan salah");
    }
     
   
    printf("\n\n Jenis barang %c mendapat diskon %d %%, Harga setelah didiskon : Rp %d \n", cJenis, iDiskon, iHDiskon);

          system("PAUSE");
      return 0;
}



