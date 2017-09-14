#include <stdio.h>

int main() 
{
	
	int i,num,n;
	n=0;
	printf("Ingrese un numero:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		n=n+i;
	}
	printf("La suma es: %d",n);
	return 0;
}

