#include <stdio.h>

int main()
{
	int i, N=2;
	printf("Program menghitung jaraktempu sepedah dengan kecepatan 2m/detik \n");
	printf("------------------------------------------\n");
	for (i=2; i<=99; i++){
		printf("%4i m", N);
		N=N+2;
	}
	printf("\n dibituhkan : %i detik utuk jarak %i meter", i, N);
	return 0;
}
