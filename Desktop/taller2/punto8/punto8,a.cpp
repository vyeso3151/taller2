'#include <stdio.h>

int main() {
	int matriz[100][100];
	int i,c,f,n,j;
	printf("Ingresa las filas que quieres: ");
	scanf("%d",&f);
	printf("Ingresa las columnas que quieres: ");
	scanf("%d",&c);
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Ingresa un numero");
			scanf("%d",&n[i][j]);

		}
	}
	printf("\n");
	printf("mostrando matriz");
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
		printf("%d",n[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
	
}
