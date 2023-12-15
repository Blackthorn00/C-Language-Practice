#include <stdio.h>
#define SIZE 7

main ()
{
	int i, min, max, pos, temp[SIZE];
	float average, sum;
	
	/* read array temp first index value*/
	printf("Enter the first temperature value: ");
	scanf("%d", &temp[0]);
	
	/* read array temp for the rest indexes*/
	for(i=1; i<SIZE; i++)
	{
		printf("Enter the next temperature: ");
		scanf("%d", &temp[i]);
	}
	/*for(i=0; i<SIZE; i++)
	{
		printf("%d", temp[i]);
	}*/
	
	/* Calculate average temperature */
	for(i=0; i<SIZE; i++)
	{
		sum += temp[i];
		average = sum/SIZE;
	}
	printf ("\n\nThe average temperature is %4.2f\n\n", average);
	
	/* Calculate minimum temperature*/
	min = temp[0];
	pos = 1;
	for(i=1; i<SIZE; i++)
	{
		if (temp[i]<min)
		{
			min = temp[i];
			pos = i + 1;
		}
	}
	printf("The minimum temperature was %d on day #%d\n\n", min, pos);
	
	/* Calculate maximum temperature*/
	max = temp[0];
	pos = 1;
	for(i=1; i<SIZE; i++)
	{
		if (temp[i]>max)
		{
			max = temp[i];
			pos = i + 1;
		}
	}
	printf("The maximum temperature was %d on day #%d\n\n", max, pos);
	system("pause");
}
