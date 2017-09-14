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
	for(;l>-1;i--){
		
		
		printf("%d\n",vec[i]);
		
		
	}
	
	return 0;
}
