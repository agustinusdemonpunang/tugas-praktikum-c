#include <stdio.h>

int main() {

int n,i;

printf("Input N = ");
scanf("%d", &n);

if (n > 50)
{
	n = n - 25;
	n = n + 10;
printf("nilai yang di rubah : %d adalah %d \n", i,n);
}else{


printf("tak bisa menampilkan nilai");
}

return 0;
}
