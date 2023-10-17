#include<stdio.h>
main()
{
	float amount, rate, time, simpleinterest;
	printf("enter amount: ");
	scanf_s("%f", &amount);
	printf("enter rate: ");
	scanf_s("%f", &rate);
	printf("enter time: ");
	scanf_s("%f", &time);
	simpleinterest = amount * rate * time / 100;
	printf("simple interest : %f", simpleinterest);
	return 0;
}
