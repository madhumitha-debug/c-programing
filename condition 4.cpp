#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter the number");
	scanf("%d", &a);
	printf("enter the number");
	scanf("%d", &b);
	c=a-b;
	printf("%d the difference of two num\n",c);
	if(c%2==0)
	printf("c is odd");
	else
	printf("c is even");
	return 0;
}