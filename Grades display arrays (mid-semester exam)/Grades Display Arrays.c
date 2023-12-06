#include <stdio.h>
#define ROW 10
#define COL 2


main ()
{
	int grades[ROW][COL], i, j, sum, count=1; // Declare grades array
	float final[ROW], average, max; // Declare final (average) grades array, average and maximum variables

	
	// Get the grades from the keyboard
	for (i=0; i<ROW; i++)
	{
		do // Input check
		{
			printf("Enter oral exam grade for student #%d: ", count);
			scanf("%d", &grades[i][0]);
			if(grades[i][0]<0 || grades[i][0]>100)
			{
				printf("Invalid grade value. Try again\n\n");
			}
		}while(!(grades[i][0]>=0 && grades[i][0]<=100));
		
		for(j=1; j<COL; j++)
		{
			do // Input check
			{
				printf("Enter written exam grade for student #%d: ", count);
				scanf("%d", &grades[i][j]);
				if(grades[i][j]<0 || grades[i][j]>100)
				{
					printf("Invalid grade value. Try again\n\n");
				}
			}while(!(grades[i][j]>=0 && grades[i][j]<=100));
		}
		sum = grades[i][j-2] + grades[i][j-1];
		average = (float)sum/2;
		final[i] = average;
		count++; 
	}
	// Calculate and output the maximum average grade
	max=final[0];
	count=1;
	for(i=0; i<ROW; i++)
	{
		if(final[i]>max)
		{
			max=final[i];
			count=i+1;
		}
	}
	printf("\n*******************\nThe maximum average grade is %4.2f, from student #%d\n\n", max, count);
	
	
	
	//Output grades array
	for(i=0; i<ROW; i++)
	{
		printf("Student #%d: ", i+1);
		for(j=0; j<COL; j++)
		{
			printf("%d ", grades[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	// Output final array
	for(i=0; i<ROW; i++)
	{
		printf("Student #%d: %4.2f\n", i+1, final[i]);
	} 
	
	
	system("pause");
}
