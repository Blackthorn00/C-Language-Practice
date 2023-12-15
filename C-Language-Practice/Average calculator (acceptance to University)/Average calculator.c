#include <stdio.h>
#include <string.h>

/* This program reads the grades of the subjects: Physics, Mathematics, Compter Science. If the 
average of these subjects is greater than 16, the student candidate is accepted to the Physics 
department of the university. They are also accepted if the Physics grade is greater than 17.
Otherwise they are rejected.*/


main ()
{
	float physics, math, comp, average;
	char subject[20];
		
	printf("Enter the Physics grade: ");
	scanf("%f", &physics);
	printf("\nEnter the Mathematics grade: ");
	scanf("%f", &math);
	printf("\nEnter the Computer Science grade: ");
	scanf("%f", &comp);
	if (physics > 17)
	{
		printf("\nCongratulations! You are accepted!\n");
	}else if ((average=(physics+math+comp)/3) > 16)
	{
		printf("\nCongratulations! You are accepted!\n");
	}else
	{
		printf("\nWe are sorry to inform you that you are not accepted.\n");
	}
	system("pause");
}
