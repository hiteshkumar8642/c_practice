#include<stdio.h>
void main()
{
	int n,f,l;
	printf("\nEnter the number\t");
	scanf("%d",&n);
	l=n%10;
	f=n;
	while(f>10)
	{
		f/=10;
	}
	
	printf("\nthe first digit is %d",f);
	printf("\nthe last digit is %d",l);
	printf("\nthe sum of first and last digit is %d",f+l);
}

