// Calculate person’s Annual salary 

#include <stdio.h>

int main()
{
	/*Gross Salary of an Employee in C*/

	float GrossPayment, basic, da, hra, da1, hra1;

	printf("Enter basic salary : ");
	scanf("%f", &basic);

	printf("Enter DA : ");
	scanf("%f", &da1);

	printf("Enter HRA : ");
	scanf("%f", &hra1);

	da = (da1 *basic) / 100;
	hra = (hra1 *basic) / 100;

	GrossPayment = basic + da + hra;

	printf("\nGross Salary of an Employee:%f\n", GrossPayment);
	return (0);
}