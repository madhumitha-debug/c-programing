#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
	printf("Max %d",a);
	printf("Min %d",b);
}

	else if(b>a)
	{
	printf("Max %d",b);
	printf("Min %d",a);
}
	else
	{
	printf("equal");
	return 0;
}
}
