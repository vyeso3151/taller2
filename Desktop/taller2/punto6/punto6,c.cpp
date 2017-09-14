#include <stdio.h>

int main() {
	int n;
	printf("Ingrese un numero.\n");
	scanf("%d",&n);
	switch(n){
	case 1:printf("El 1 corresponde a ENERO.");
	break;
	case 2:printf("El 2 corresponde a FEBRERO.");
	break;
	case 3:printf("El 3 corresponde a MARZO.");
	break;
	case 4:printf("El 4 corresponde a ABRIL.");
	break;
	case 5:printf("El 5 corresponde a MAYO.");
	break;
	case 6:printf("El 6 corresponde a JUNIO.");
	break;
	case 7:printf("El 7 corresponde a JULIO.");
	break;
	case 8:printf("El 8 corresponde a AGOSTO.");
	break;
	case 9:printf("El 9 corresponde a SEPTIEMBRE.");
	break;
	case 10:printf("El 10 corresponde a OCTUBRE.");
	break;
	case 11:printf("El 11 corresponde a NOVIEMBRE.");
	break;
	case 12:printf("El 12 corresponde a DICIEMBRE.");
	break;
	default:printf("El %d No corresponde a ningun mes.");
	break;
	}
	
	return 0;
}

