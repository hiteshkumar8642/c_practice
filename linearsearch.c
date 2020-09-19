#include<stdio.h>
void main()
{
	int a[10],i,ele,n;
	printf("\nenter the number of elements\t");
	scanf("%d",&n);
	printf("\nenter the elements\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the element to search\t");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			break;
		}
	}
	printf("\nelement found at %d position",i+1);
}
