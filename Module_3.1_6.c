#include <stdio.h>
main() 
{
	int days, years;

	printf("Enter the number of days: ");
	scanf_s("%d", &days);

	years = days / 365;

	printf("%d days is equivalent to %d years.\n", days, years);

	return 0;
}