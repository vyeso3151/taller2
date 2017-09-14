#include <stdio.h>


int main() 
{
	int numero,c=0;
	do{
		printf("ingtrese un numero:");
		scanf("%d",&numero);
		printf("\n");
		if(numero>0){
						c=c+1;
		}
		
	} while(numero!=0);
	printf("La cangt5idad de numeros mahy6ores de 0 son : %d",c);
	
	return 0;
}

