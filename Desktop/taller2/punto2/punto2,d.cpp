#include <stdio.h>


int main()
{
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	if(numero<0)
	{
		printf("El numero es negativo.");
	}else{
		printf("EL numero es positivo.");
	}
	
	return 0;
}

