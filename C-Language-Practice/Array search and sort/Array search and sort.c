#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

/* This program checks if the given array is symmetrical,
and after that it sorts it so that the elements are in numerical order.*/

main()
{
	int i, j, temp;
	int table[SIZE];
	bool symm=true;
	// Input the array elements
	for(i=0; i<SIZE; i++)
	{
		printf("Enter the next array element: ");
		scanf("%d", &table[i]);
	}
	i=0;
	while(i<SIZE/2 && symm==true) //Check if array is symmetrical
	{
		if(table[i]!=table[SIZE-1-i])
		{
			symm=false;
		}
		i++;
	} //end while loop
	
	if (symm==true)
	{
		printf("\n\nThe array is symmetrical! Now we will sort it\n\n");
	}else
	{
		printf("\n\nThe array is not symmetrical.\n\n");
	}
	printf("*********************\n\n");
	j=0;
	/* Sorting the array */
	for(i=1; i<SIZE; i++)//start for loop
	{
		for(j=SIZE-1; j>=i; j--)
		{
			if(table[j-1]>table[j])
			{
				temp=table[j-1];
				table[j-1]=table[j];
				table[j]=temp;
			}
		}
	}//end for loop
	
	/* Output the sorted table*/
	printf("This is now your array: ");
	for(i=0; i<SIZE; i++)
	{
		printf("%d ", table[i]);
	}
	printf("\n\n\n");
	system("pause");
}
