#include<stdio.h>
int prime(int a, int b);
main()
{
	int a,b;
	printf("enter a nuumber");
	scanf("%d",&a);
	b=prime(a,a/2);
	if(b==1)
	{
		printf("it is a prime number");
		
	}
	else
	{
		printf("it is not a prime number");
	}
	return 0;
}
int prime(int a,int b)
{
	if(b==1)
	{
		return 1;
	}
	else if(a%b==0)
	{
		return 0;
	}
	else
	{
		return prime(a,b-1);
	}
}
