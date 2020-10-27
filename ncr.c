#include<stdio.h>
long int fact(int n)
{
	long int i,product=1;
	if(n==0)
	{
		return 1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			product=product*i;
		}
		return product;
	}
}
void main()
{
	int n=0,r=0;
	printf("\nenter the value of n\t");
		scanf("%d",&n);
		printf("\nenter the value of r\t");
		scanf("%d",&r);
	if(n<0||r<0||n<r)
	{
		while(n<0||r<0||n<r)
		{	if (n<0||n<r)
			{
				printf("\nenter the correct value of n\t");
				scanf("%d",&n);
			}
			if(r<0||n<r)
			{
				printf("\nenter the correct value of r\t");
				scanf("%d",&r);
			}
		}
	}
	printf("the value of nCr is %d\n",fact(n)/(fact(n-r)*fact(r)));
}
