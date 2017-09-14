#include <stdio.h>

int main() 
{
	int numero,c=0,r=0;
	do{
		printf("ingtrese un numero:");
		scanf("%d",&numero);
		printf("\n");
		if(numero>0){
			c=c+1;
			r=r+numero;
		}
		
	} while((numero!=0)&&((numero<20)||(numero>30)));
	printf("La cantidad de numeros mayores de 0 son : %d, y la suma es : %d ",c,r);
	
	return 0;
}

