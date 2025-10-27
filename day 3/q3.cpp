#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	a=a+b;
	a=a-b;
	a=a-b;
	printf("after swpping:a=%d,b=%d",a,b);
	return 0;
}
