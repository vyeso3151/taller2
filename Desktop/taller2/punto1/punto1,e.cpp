#include <stdio.h>


int main() 
{
	int valorDolar;
	int cantidadDolares;
	int dineroDolares;
	
	printf("Este Programa Calcula Cuanto Dinero En Dolares Tienes, Ingtrsa El Valor Del Dolar: ");
	scanf("%d",&valorDolar);
	
	printf("Ingtresa La Cantidad De Dolares: \n");
	scanf("%d",&cantidadDolares);
	
	dineroDolares=valorDolar*cantidadDolares;
	
	printf("El Total De Dinero En Dolares Que Tienes Es: %d",dineroDolares);
	
	return 0;
}

