#include <stdio.h>

int main()
{
	int horasDiurna;
	int horasNocturnas;
	int horasDominicales;
	int horasFestivos;
	int vHorasDiurnas; 
	int vHorasNocturnas;
	int vHorasDominicales;
	int vHorasFestivos;
	int salarioTotal; 
	
	printf("Este programa calcula tu salario, Ingresa las horas diurnas:\n");
	scanf("%d",&horasDiurna);
	printf("Ingresa las horas nocturnas:\n");
	scanf("%d",&horasNocturnas);
	printf("Ingresa las horas dominicales:\n ");
	scanf("%d",&horasDominicales);
	printf("Ingresa las horas festivos :\n ");
	scanf("%d",&horasFestivos);
	
 
	vHorasDiurnas = (2500)*horasDiurna;
	vHorasNocturnas = (2500+875)*horasNocturnas;
	vHorasDominicales = (2500+1250)*horasDominicales;
	vHorasFestivos = (2500+1875)*horasFestivos;
	salarioTotal = vHorasDiurnas+vHorasNocturnas+vHorasDominicales+vHorasFestivos;
	
	printf("Valor Hora = 2500 \n");
	printf("Valor Horas Diurnas = %d \n",vHorasDiurnas);
	printf("Valor Horas Nocturnas = %d \n",vHorasNocturnas);
	printf("Valor Horas Dominicales = %d \n",vHorasDominicales);
	printf("Valor Horas Festivos = %d \n",vHorasFestivos);

	printf("El Salario Total Es = %d  ",salarioTotal);
	
	
	return 0;
}

