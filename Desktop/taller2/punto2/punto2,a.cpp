#include <stdio.h>


int main() 

{
	int numero1;
	int numero2;
	
	printf("Ingresa un numero: \n ");
	scanf("%d",&numero1);
	printf("Ingresa otro numero: \n ");
	scanf("%d",&numero2);
	
	if(numero1>numero2)
	{
		printf("El numero mayor es: %d",numero1);
	}else
	{
		printf("El numero mayor es: %d",numero2);
	}
	
	
	return 0;
}

