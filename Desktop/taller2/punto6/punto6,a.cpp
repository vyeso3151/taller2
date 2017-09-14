#include <stdio.h>

int main() 
{
	char l;
	printf("Ingresa una vocal:\n");
	scanf("%c",&l);
	switch(l){
	case 'a':printf("Es la vocal a minuscula.");
	break;
	case 'e':printf("Es la vocal e minuscula.");
	break;
	case 'i':printf("Es la vocal i minuscula.");
	break;
	case 'o':printf("Es la vocal o minuscula.");
	break;
	case 'u':printf("Es la vocal u minuscula.");
	break;
	default:printf("no es minuscula.");
	break;
	
	}
	
	
	
	
	
	return 0;
}

