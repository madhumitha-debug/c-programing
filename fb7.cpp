#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
printf("enter the num");
scanf("%d", &a);
printf("enter the num");
scanf("%d", &b);
printf("enter the num");
scanf("%d", &c);
printf("enter the num");
scanf("%d", &d);
e=sqrt(a-b+c-d);
printf("the distance between the two points is %d",e);
return 0;
}