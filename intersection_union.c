#include<stdio.h>
void print(int a[10],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void accept(int a[10],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int intersection(int a[10],int n ,int b[10],int m,int c[10])
{
	int i=0,j=0,k=0;
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{	
			if (a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
	return k;
}
int setunion(int a[10],int n,int b[10],int m,int c[20])
{
	int i=0,j=0,k=0,found;
	for(i=0,k=0;i<n;i++,k++)
	{
		c[k]=a[i];
	}
	for(j=0;j<m;j++)
	{
		found=0;
		for(i=0;i<n;i++)
		{
			if(b[j]==c[i])
			{
				found=1;
				break;
			}
		}
		if(found==0)
		{
			c[k++]=b[j];
		}
		
	}
	return k;
}
void main()
{
	int a[10],b[10],in[10],un[20],m,n,k,l;
	printf("\nenter the elements of set 1\t");
	scanf("%d",&n);
	printf("\nEnter the elements\n");
	accept(a,n);
	printf("\nSet 1 is\n");
	print(a,n);
	printf("\nEnter the elements of set 2\t");
	scanf("%d",&m);
	printf("\nEnter the elements\n");
	accept(b,m);
	printf("\nSet 2 is\n");
	print(b,m);
	k=intersection(a,n,b,n,in);
	printf("\nThe intersection is\n");
	print(in,k);
	l=setunion(a,n,b,m,un);
	printf("\nThe union is\n");
	print(un,l);
}
	
