#include <stdio.h>

int main ()
{
	int side; /* square side integer variable*/
	int temp; /* variable that works as a counter*/
	int slash; /* forward slash integer*/
	int choice; /* integer for menu choice (1 OR 2)*/
	do
	{

		do /* start of input check loop*/
		{
			printf("Enter the square side (whole numbers only): "); /* get the size of the square*/
			scanf("%d", &side);
			if (side<0) /* check if size is negative*/
			{
				printf("Negative numbers are not accepted.\n\n**********\n\n"); /* print error message*/
			}
		}while(side<0); /* end input check loop*/
		
		temp = side; /* set the counter equal to the size*/
		
		while (side-- >0) /* loop as many times as the size of the square*/
		{
			slash = temp; /* reset the slash integer for the next loop*/
			for (slash; slash>0; slash--) /* loop to print out as many slashes as the size */
			{
				printf("/ "); /* print out forward slash */
			} /* end inner loop */
			
			printf("\n");
		} /*end outer loop */
		do /* input check for menu choice*/
		{
			printf("\n\nReturn to beginning?\n1: YES\n2: NO(EXIT)\n");
			scanf("%d", &choice);
		}while (choice!=1 && choice!=2); /* end of input check loop*/
	}while (choice==1); /* return to beginning of the program if input (choice) is '1'*/
	
	system("pause");
	return 0; /* indicate successful termination*/
} /* end main */
