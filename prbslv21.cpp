#include<stdio.h>
int main()
{
	float l,b,side,radius,base,height;
	float area_square,area_rectangle,area_triangle,area_circle;
	scanf("%f %f %f %f %f %f", &l, &b, &side, &radius, &base, &height);
	area_square=side*side;
	printf("%f",area_square);
	area_rectangle=l*b;
	printf("%f",area_rectangle);
	area_triangle=0.5*base*height;

	printf("%f",area_triangle);
	area_circle=3.14*radius*radius;
	printf("%f",area_circle);
	return 0;
}
