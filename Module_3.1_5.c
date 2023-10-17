#include<stdio.h>
main()
{
	int year;
	printf("enter the year: ");
	scanf_s("%d", &year);
	if
		(year % 4 == 0 && year % 100 == 0 || year % 400 == 0)
	{
		printf("year is leap year");
	}
	else
	{
		printf("year is not a leap year");
	}
	return 0;
}
