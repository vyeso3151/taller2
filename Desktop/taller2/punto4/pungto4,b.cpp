#include <stdio.h>


int main()
{
	int numero1,i=0,r;
	
	printf("Ingresa un numero del 1 al 10: ");
	scanf("%d",&numero1);
	do{
		if(i<=10){
			r=numero1*i;
			printf("%d * %d = %d",numero1,i,r);
			printf("\n");
		}
		
		i++;
	} while(numero1<=10);
	
	return 0;
}

