#include <stdio.h>

int main()
{
	int i, N=100;
	printf("Deret bilangan kelipatan 5 dari terbesar \n");
	printf("------------------------------------------\n");
	for (i=1; i<=10; i++){
		printf("%4i", N);
		N=N-5;
	}
	return 0;
}
