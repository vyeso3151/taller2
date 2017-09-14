#include <stdio.h>

int main() {
	
	int vec[100];
	int l,i,c=0;
	
	
	printf("Ingresa la longitud del vector.");
	scanf("%d",&l);
	
	for(i=1;i<=l;i++){
		printf("ingresa un numero: ");
		scanf("%d",&vec[i]);
		
	}
	for(i=1;i<=l;i++){
		
		c=c+1;
		printf("En la casilla  %d esta el numero %d\n",c,vec[i]);
		
		
	}
	
	return 0;
}

