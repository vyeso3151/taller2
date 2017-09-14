#include <stdio.h>
//hecho por:victor Bruno
//descripcion: hallar el area de un triangulo.
//fecha:29/08/2017
int main()
{
	//declaracion de variables
	float area;
	float base;
	float altura;
	
	
	printf(" El programa calcula el area de un triangulo, Ingresa la base.\n");
	scanf("%f",&base);
	printf(" Ingrese la altura.\n");
	scanf("%f",&altura);
	
	//proceso
	
	area=(base*altura)/2;
	//salida
	printf("El area del triangulo es: %f",area);
	return 0 ;
}
