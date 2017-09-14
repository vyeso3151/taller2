#include <stdio.h>

int main() {
	int ingresar,retirar;
	int fondo;
	int menu,opci;
	
	fondo=1000000;
	
	printf("Ingresa el 0:	");
	scanf("%d",&menu);
	
	
	
	switch(menu){
	case 0:printf("fondo=1000000\n");
		
		
		printf("		bienvenido a su cajero preferido ""Grupo Aval.\n""");
		printf("Fondos: %d\n",fondo);
		
		printf("				MENU\n");
		printf("1.Ingresar dinero.					2.Retirar saldo e imprimir recibo.\n");
		printf("3.Sallir.\n\n");
		
		printf("Elige una opcion: ");
		scanf("%d",&opci);
		
		switch(opci){
		case 1:printf("Elegiste la opcion (1).\n Ingrese la cantidad  de dinero: \n");
		scanf("%d",&ingresar);
		fondo=fondo+ingresar;
		printf("Fondo=%d",fondo);
		break;
		case 2:printf("Elegiste la opcion (2).\n Ingrese la cantidad  de dinero que quieres retirar: \n");
		scanf("%d",&retirar);
		if(fondo>retirar){
		fondo=fondo-retirar;
		printf("05/09/017\n Acabas de retirar de tu cuenta un valor de %d. \n Tu cuenta quedo con un fondo de: %d\n",retirar,fondo);
		printf("Fondo=",fondo);
		}else{
			printf("Lo sentimos, No tienes fondos suficientes.");
		}
		
		break;
		case 3:printf("Gracias por utilizar nuestro cajero.");
		break;
		default:printf("No coinside el numero.");
		break;
		}
		
	break;
		
	
	}
	return 0;
}

