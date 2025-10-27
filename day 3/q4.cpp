#include<stdio.h>
int main(){
	int n,lastdigits,exceptlast;
	printf("enter a number:");
	scanf("%d",&n);
	lastdigits=n%10;
	exceptlast=n/10;
	printf("lastdigits =%d\n",lastdigits);
	printf("all digits except last=%d\n",exceptlast);
	return 0;
	
}
