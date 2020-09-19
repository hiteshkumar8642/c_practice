#include<stdio.h>
void main()
{
	int a[10],n,i,temp=0,j,k;
	printf("\nenter the number of elements\t");
	scanf("%d",&n);
	printf("\nenter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-1;j++)
		{
			
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		for(k=0;k<n;k++)
		{
			printf("%d\t",a[k]);
		}
		printf("\n");
	}
	printf("\nthe sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
