#include <stdio.h>



int main()
{
	int magic[3][3] ={{8, 1, 6},{3, 5, 7},{4, 9, 2}};
	int i, j, sum;
	int sumrows[3];
	int sumcolumns[3];
	int sumdiagonal1;
	int sumdiagonal2;
	
	// Print the magic square
	for (i=0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d", magic[i][j]);
		}
		printf("\n");
	}
	/* Now check that it is a magic square:
	all rows and columns need to add to 15*/
	sumdiagonal1 = 0;
	sumdiagonal2 = 0;
	for (i = 0 ; i < 3; i++)
	{
		sumrows[i] = 0;
		sumcolumns[i] = 0;
		for (j = 0 ; j < 3; j++)
		{
			sumrows[i] += magic[i][j];
			sumcolumns[i]+= magic[j][i];
		}
		sumdiagonal1 += magic[i][i];
		sumdiagonal2 += magic[i][2-i];
	}
	for (i=0; i < 3 ; i++)
	{
		printf("Sum Row %d = %d\n", i, sumrows[i]);
		printf("Sum Column %d = %d\n\n", i, sumcolumns[i]);
	}
	printf("Sum diagonal 1 is %d\n", sumdiagonal1);
	printf("Sum diagonal 2 is %d\n\n", sumdiagonal2);
	
	system("pause");
	return 0;
}
