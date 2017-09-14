#include <stdio.h>

int main() 
{
	int i,num,n;
	n=0;
	printf("Ingrese un numero:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		n=(2^i)+n;
	}
	printf("La suma es: %d",n);
	return 0;
}

