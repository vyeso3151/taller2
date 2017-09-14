#include <stdio.h>
int main() 
{
	int numero, i=0, c;
	printf("ingresa el numero del cual quieres saber cual es el factorial:");
	scanf("%d",&numero);
	c=numero-1;
	i=numero;
	while(c>=1){
		i=i*c;
		
		c--;
	}
	printf("El facgtorial de %d es: %d ",numero,i);
	return 0;
}

