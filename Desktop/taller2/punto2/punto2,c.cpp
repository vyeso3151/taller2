#include <stdio.h>


int main()
{
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	if(numero%2==0)
	{
		printf("El numero es par.");
	}else{
		printf("EL numero es impar.");
	}
		
	return 0;
}

