#include <stdio.h>





main ()
{
	int ROW, COL, table[ROW][COL], i, j, max, pos;
	printf("Please input the number of ROWS for your table: ");
	scanf("%d", &ROW);
	printf("Please input the number of COLUMNS for your table: ");
	scanf("%d", &COL);
	
	
	//input table elements from keyboard
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			do
			{
				printf("Enter the next element: ");
				scanf("%d", &table[i][j]);
			}while(!(table[i][j]>=0 && table[i][j]<=100));
		}
	}
	
	//max of entire table
	max = table[0][0];
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			if(table[i][j]>max)
			{
				max=table[i][j];
			}
		}
	}
	printf("\nThe maximum is %d\n\n", max);
	
	//maximum per row
	max=table[0][0];
	pos = 1;
	for(i=0; i<ROW; i++)
	{
		max = table[i][0];
		for(j=0; j<COL; j++)
		{
			if(table[i][j]>max)
			{
				max = table[i][j];
			}
		}
		printf("\nThe maximum in row #%d is %d\n", pos, max);
		pos++;
	}
	printf("\nHere is your full table:\n");
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
			printf("%d", table[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	system("pause");
		
}
