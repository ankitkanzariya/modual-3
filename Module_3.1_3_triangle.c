#include<stdio.h>
int main()
{
	int b, h, a;
	printf("enter the base: ");
	scanf_s("%d", &b);
	printf("enter the hight: ");
	scanf_s("%d", &h);
	a = b * h / 2;
	printf("area is: %d", a);
	return 0;

}
