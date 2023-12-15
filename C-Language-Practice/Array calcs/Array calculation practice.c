#include<stdio.h>
#define SIZE 20


int main()
{
	/* Variables for the array counter(i), 
	the sum of all elements, the sum of the elements on odd locations inside the array
	the sum of even numbers and the even number counter*/
	
	int i, num, sum, oddsum,evensum, even; 
	int t[SIZE] = {0}; // Initialize our array
	float evenAverage; // The average of the even number elements
	
	/* Get the elements from the keyboard*/
	for(i=0; i<SIZE; i++)
	{
		do // Input check so we only have positive number elements
		{
			printf("Enter the next array element: ");
			scanf("%d", &num);
			if(num < 0)
			{
				printf("You have entered an invalid number! Try again.\n\n");
			}	
		}while(num < 0);
		t[i] = num;
	} // end of for loop
	
	sum = oddsum = evensum = even =0;
	evenAverage = 0;
	
	for(i=0; i<SIZE; i++)
	{
		sum += t[i];
		if (t[i]%2==0)
		{
			evensum+=t[i];
			even++;
		}
	}
	printf("The sum of all array elements is: %d\n\n", sum);
	/*  Calculate and print the average if there is at least one even number */
	if (even>0)
	{
		evenAverage = (float)evensum/even;
		printf("The average of the even numbers is: %4.2f\n\n", evenAverage);
	}else
	{
		printf("There are no even numbers inside the array.\n\n");
	}
	/* Calculate the sum of all numbers in odd spaces */
	for (i=0; i<SIZE; i+=2)
	{
		oddsum += t[i];
	}
	printf("The sum of all the numbers in odd spaces is: %d\n\n", oddsum);
	system("pause");
	 
	return 0;
}
