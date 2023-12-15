#include <stdio.h>

/*A person is working for 7.5 euros per hour. This program gets
the working hours of the user and calculates the sum of the monthly
pay. For every extra hour above 40, the payment is increased by 25%*/


main ()
{
	float monthlyPay, hours; // The month's pay and the working hours per week
	
	printf("Please specify the number of working hours per week: ");
	scanf("%f", &hours);
	if (hours > 40)
	{
		int extra = (hours - 40); // calculate the extra hours per week
		float hourlyPay = 7.5 + (extra*0.25*7.5); // calculate new hourly pay (+25% per extra hour)
		monthlyPay = (40 * 7.5 * 4) + (extra*4*hourlyPay*4); // calculate the monthly pay for 40 hours and then the pay for the extra hours and add them together 
	}else
	{
		monthlyPay = hours * 7.5 * 4; // calculate the standard monthly pay if the hours are less than 40
	}
	printf("Your monthly pay is %f euros", monthlyPay); // print the salary.
	system("pause");
}
