#include<stdio.h>
main()
{
	int num, num1;
	printf("Enter ur number: ");
	scanf_s("%d", &num);
	printf("Enter ur second number: ");
	scanf_s("%d", &num1);
	printf("%d + %d = %d \n", num, num1, num + num1);
	printf("%d - %d = %d \n", num, num1, num - num1);
	printf("%d * %d = %d \n", num, num1, num * num1);
	printf("%d / %d = %d \n", num, num1, num / num1);
	printf("%d % %d = %d", num, num1, num % num1);
	return 0;
}