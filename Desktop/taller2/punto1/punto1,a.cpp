#include <stdio.h>

int main()
{
	
	float areaCircunferencia;
	float radioCircunferencia;
	float diametroCircunferencia;
	float longitudCircunferencia;
	float pi;
	
	pi=3.14;
	
	printf("Este programa calcula lacircunferencia de un circulo, ingresa el valor del radio de una circunferencia.\n");
	scanf("%f",&radioCircunferencia);
	
	areaCircunferencia =(pi*(radioCircunferencia*radioCircunferencia));
	diametroCircunferencia = (2*pi);
	longitudCircunferencia = (2*pi*radioCircunferencia);
		
	printf(" El radio de la circunferencia es: %f\n", radioCircunferencia);
	printf(" El area de la circunferencia es: %f\n", areaCircunferencia);
	printf(" El diametro de la circunferencia es: %f\n", diametroCircunferencia);
	printf(" La longitud de la circunferencia es: %f\n", longitudCircunferencia);
	
	
	return 0;
}

