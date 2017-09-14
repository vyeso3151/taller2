#include <stdio.h>

int main()
{
	int i=0,c=0;
	
	while (i<=50){
		if(i%2==0){
			c=c+i;
			printf("%d\n",c);
			
		}
		i++;
	}
	
	return 0;
}

