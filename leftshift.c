#include<stdio.h>
void main()
{
	int a[10],i,cnt=0,temp=0,temp1=0,n=0,d=0;
	printf("\nenter the total number of elements\t");
	scanf("%d",&n);
	printf("\nenter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\nenter the total shifting\t");
	scanf("%d",&d);
	i=0;
	temp1=a[0];
	while(cnt<n)
	{
		if(i<d)
		{
			temp=a[n-d+i];
			a[n-d+i]=temp1;
			i=n-d+i;
			temp1=temp;
		}
		else
		{
			temp=a[i-d];
			a[i-d]=temp1;
			i=i-d;
			temp1=temp;
		}
		cnt++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	print("\n");
}
