#include <stdio.h>

int main() 
{
	int i;
	int n=0;
	for(i=1;i<=10;i++)
	{
		n=n+(i*i);
		printf("\n");
		printf("%d",n);
		printf("\n");
	}
	return 0;
}

