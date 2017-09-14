#include <stdio.h>

int main() {
	
	int U,D,C,UM;
	int n;
	printf("Ingresa las unidades de mil.\n");
	scanf("%d",&UM);
	printf("Ingresa las centenas.\n");
	scanf("%d",&C);
	printf("Ingresa las decenas.\n");
	scanf("%d",&D);
	printf("Ingresa las unidades.\n");
	scanf("%d",&U);
	
	switch(UM){
	case 0:printf(" ");
	break;
	case 1:printf("M-");
	break;
	case 2:printf("MM-");
	break;
	case 3:printf("MMM-");
	break;
	case 4:printf("M¬V-");
	break;
	case 5:printf("¬V-");
	break;
	case 6:printf("¬VM-");
	break;
	case 7:printf("¬VMM-");
	break;
	case 8:printf("¬VMMM-");
	break;
	case 9:printf("¬V¬X-");
	break;
	case 10:printf("¬X-");
	break;
	default:printf("No es unidad de mil.");
	break;
	}
	
	switch(C){
	case 0:printf(" ");
	break;
	case 1:printf("C-");
	break;
	case 2:printf("CC-");
	break;
	case 3:printf("CCC-");
	break;
	case 4:printf("CD-");
	break;
	case 5:printf("D-");
	break;
	case 6:printf("DC-");
	break;
	case 7:printf("DCC-");
	break;
	case 8:printf("DCCC-");
	break;
	case 9:printf("DM-");
	break;
	default:printf("No es centena");
	break;
	}
	
	
	switch(D){
	case 0:printf(" ");
	break;
	case 1:printf("X-");
	break;
	case 2:printf("XX-");
	break;
	case 3:printf("XXX-");
	break;
	case 4:printf("XL-");
	break;
	case 5:printf("L-");
	break;
	case 6:printf("LX-");
	break;
	case 7:printf("LXX-");
	break;
	case 8:printf("LXXX-");
	break;
	case 9:printf("XC");
	break;
	default:printf("No es decena");
	break;
	}
	
	
	switch(U){
	case 0:printf(" ");
	break;
	case 1:printf("I");
	break;
	case 2:printf("II");
	break;
	case 3:printf("III");
	break;
	case 4:printf("IV");
	break;
	case 5:printf("V");
	break;
	case 6:printf("VI");
	break;
	case 7:printf("VII");
	break;
	case 8:printf("VIII");
	break;
	case 9:printf("IX");
	break;
	default:printf("No es unidad");
	break;
	}
	printf("\n");
	
	
	printf("%d%d%d%d ",UM,C,D,U);
	
	
	return 0;
}

