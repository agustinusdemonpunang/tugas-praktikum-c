#include <stdio.h>

int main()
{
	int i, N=1;
	printf("Deret bilangan kelipatan n^2 \n");
	printf("------------------------------------------\n");
	for (i=1; i<=11; i++){
		printf("%5i", N);
		N=N*2;
	}
	return 0;
}
