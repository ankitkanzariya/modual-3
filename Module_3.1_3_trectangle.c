#include<stdio.h>
int main()
{
	int l, w, a;
	printf("enter lenght:");
	scanf_s("%d", &l);
	printf("enter width: ");
	scanf_s("%d", &w);
	a = l * w;
	printf("area is:%d", a);
	return 0;
}
