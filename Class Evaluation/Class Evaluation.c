#include <stdio.h>
#define SIZE 10
#define GRADES 6


main ()
{
	int i,sum, score[SIZE];
	int gradeCount[GRADES] = {0};
	float average;
	
	/* Fill score array with scores for each student(10)*/
	for (i=0; i<SIZE; i++)
	{
		printf("Enter next score: ");
		scanf("%d", &score[i]);
	}
	/* Calculate sum and count Grades (how many A,B,C,D,E,F)*/
	for (i=0; i<SIZE; i++)
	{
		sum += score[i];
		switch(score[i]/10)
		{
			case 10:
			case 9:
				gradeCount[5]++;
				break;
			case 8:
				gradeCount[4]++;
				break;
			case 7:
				gradeCount[3]++;
				break;
			case 6:
				gradeCount[2]++;
				break;
			case 5: 
				gradeCount[1]++;
				break;
			default:
				gradeCount[0]++;
				break;			
		}
		
	}
	average = (float)sum/SIZE;
	/* Print the results*/
	printf("The class average is %4.2f\n\n", average);
	
	printf("A=%2d\n", gradeCount[5]);
	printf("B=%2d\n", gradeCount[4]);
	printf("C=%2d\n", gradeCount[3]);
	printf("D=%2d\n", gradeCount[2]);
	printf("E=%2d\n", gradeCount[1]);
	printf("F=%2d\n", gradeCount[0]);
	
	system("pause");
	
	
	
	
	
	
}

