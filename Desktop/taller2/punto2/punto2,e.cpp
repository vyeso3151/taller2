#include <stdio.h>

int main()
{
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	
	printf("Ingrese tres numeros.\n");
	scanf("%d",&numero1);
	scanf("%d",&numero2);
	scanf("%d",&numero3);
	printf("Ingrese un cuarto numero.\n");
	scanf("%d",&numero4);
	if(numero4==numero1){
		printf("El cuarto numero es igual al primero");
	}else{
		if(numero4==numero2){
			printf("El cuarto numero es igual al segundo");
	}else{
			if(numero4==numero3){
				printf("El cuarto numero es igual al tercero");
		}else{
				printf("El numero %d No es igual a ninguno",numero4);
			}
	}
	}
	return 0;
}

