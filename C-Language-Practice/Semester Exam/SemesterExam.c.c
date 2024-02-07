#include <stdio.h>
#include <string.h>
#include <time.h>

void sortArrays(char str[][100], float num[], int n); /*Function to sort two arrays*/
void swapStr(char *a, char *b); /*Function to swap two strings*/
void swapInt(float *a, float *b); /*Function to swap two integer values*/
void printArrays(char str[][100], float num[], int n);

int main()
{
	char NAMES[5][100];
	int GRADES[5][3];
	float MO[5];
	int i=0,j=0, count=1;
    srand(time(NULL));
    /*Read names from the keyboard to fill NAMES*/
	for(i=0; i<5; i++)
	{
		printf("Enter the name of Student #%d: ", count);
		gets(NAMES[i]);
		count++;
        printf("\n");
	}
	/* Fill GRADES with random numbers from 0 to 100*/
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			GRADES[i][j]=rand()%1 + rand()%100;
			printf("%d ", GRADES[i][j]);
		}
		printf("\n\n");
	}
    for(i=0; i<5; i++) /*Calculate and fill the MO array*/
    {
        MO[i] = GRADES[i][0]*0.1 + GRADES[i][1]*0.3 + GRADES[i][2]*0.6;
    }
    sortArrays(NAMES, MO, 5);
    printArrays(NAMES, MO, 5);
	system("pause");
	return 0;
}

void sortArrays(char str[][100], float num[], int n)
{
    int i,j;
  	for (i = 0; i < (n - 1); i++)
	{
    	for (j = 0; j < n - i - 1; j++)
		{
      		if (num[j] < num[j + 1])
			{
        	    swapStr(str[j], str[j + 1]);
        		swapInt(&num[j], &num[j + 1]);
      	    }
    	}
	}
}

void swapStr(char *a, char *b)
{
	char temp[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

void swapInt(float *a, float *b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}

void printArrays(char str[][100], float num[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s %4.2f", str[i], num[i]);
        printf("\n");
    }

}
