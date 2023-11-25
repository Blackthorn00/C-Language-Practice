#include <stdio.h>

void main (void) /* Start of our pogram */
{
	int a=1, b=1; /* declare our two variables */
	for(a=1; a<=10; a++) /* for loop 10 times for the 1st number */
	{
		for(b=1; b<=10; b++) /* for loop 10 times for the second number*/
		{
			printf("%d * %d = %d\n", a, b, a*b); /* print the table for one set of numbers*/
		} // end inner for loop
		printf("\n**********\n\n"); /* change lines for the next table to be printed*/
	} // end outer for loop
	system("pause"); /* pause the system so the console does not close when the program 
						finishes executing*/	
}
