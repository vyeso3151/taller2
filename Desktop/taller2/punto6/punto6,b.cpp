#include <stdio.h>

int main() {
	char l;
	printf("Ingresa una letra:\n");
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
	case 'A':printf("Es la vocal A mayuscula.");
	break;
	case 'E':printf("Es la vocal E mayuscula.");
	break;
	case 'I':printf("Es la vocal I mayuscula.");
	break;
	case 'O':printf("Es la vocal O mayuscula.");
	break;
	case 'U':printf("Es la vocal U mayuscula.");
	break;
	default:printf("No es vocal.");
	break;
	}
	return 0;
}

