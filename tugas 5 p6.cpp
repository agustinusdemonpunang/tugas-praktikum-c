#include <stdio.h>

int main()
{
	int i, k, N=0;
	printf("program menghitung bunga setiap bulan nya \n");
	printf("------------------------------------------\n");
	printf("Masukan saldo yang anda punya \n");
	scanf("%i", &N);
	
	k = N * 2/100;
	
	for (i=0; i<=8; i++){
		printf("Rp%7i ", N);
		N = N + k;
	}
	
	printf(" saldo yang anda miliki setelah 10 bulan adalah: Rp%i \n", N);
	return 0;
}
