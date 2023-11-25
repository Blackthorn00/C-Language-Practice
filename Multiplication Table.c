#include <stdio.h>

void main (void)
{
	int a=1, b=1;
	for(a=1; a<=10; a++)
	{
		for(b=1; b<=10; b++)
		{
			printf("%d * %d = %d\n", a, b, a*b);
		}
		printf("\n\n");
	}	
	return 0;
}
