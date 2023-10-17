#include <stdio.h>
main()
{
	int years, days;

	printf("Enter the number of years: ");
	scanf_s("%d", &years);

	days = years * 365;

	printf("%d years is equivalent to %d days.\n", years, days);

	return 0;
}
