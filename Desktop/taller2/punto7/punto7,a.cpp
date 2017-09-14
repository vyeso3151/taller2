#include <stdio.h>

int main() {
	
	int vec[100];
	int l,i;
	int suma=0;
	
	printf("Ingresa la longitud del vector.");
	scanf("%d",&l);
	
	for(i=1;i<=l;i++){
		printf("ingresa un numero: ");
		scanf("%d",&vec[i]);
		
	}
	for(i=1;i<=l;i++){
		
		suma=suma+vec[i];
		printf("La suma del vector es: %d\n",suma);
		
	}
	
	
	
	return 0;
}

