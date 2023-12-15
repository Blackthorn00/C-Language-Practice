#include <stdio.h>
#include <string.h>
#define ROW 10
#define COL 2



void main (void)
{
	int grades[ROW][COL], i, j, sum, count=1; 
	float final[ROW], average, max;
	char exam[] = "written\0";
	// Get the grades from the keyboard
	for (i=0; i<ROW; i++)
	{	
		for(j=0; j<COL; j++)
		{
			do // Input check
			{
				if(j==0)
				{
					strcpy(exam, "written");
				}else if(j==1)
				{
					strcpy(exam, "oral");
				}
				printf("Enter %s exam grade for student #%d: ", exam, count);
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
	printf("\n*******************\nThe maximum final grade is %4.2f, from student #%d\n\n", max, count);
	
	
	//Output grades array
	printf("            Oral  Written\n");
	for(i=0; i<ROW; i++)
	{
		printf("Student #%d: ", i+1);
		for(j=0; j<COL; j++)
		{
			printf("%d    ", grades[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	// Output final array
	for(i=0; i<ROW; i++)
	{
		printf("Student #%d final grade: %4.2f\n", i+1, final[i]);
	} 
	printf("\n");
	system("pause");
	
}
