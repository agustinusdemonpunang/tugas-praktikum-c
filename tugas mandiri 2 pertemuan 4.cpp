#include <stdio.h>

int main() {


int N;

printf("Input N = ");
scanf("%i", &N);

if (N > 50)
{
	N = N + 10;
}
else 
{
	N = N - 25;
}

printf("\nN = %i", N);

return 0;
}
