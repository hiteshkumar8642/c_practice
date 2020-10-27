#include<stdio.h>
#include<stdlib.h>
int lowertriangle(int a[10][10], int n)
{
	int flag=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			{
				if(a[i][j]!=0)
				{
					flag=1;
					return 0;
				}
			}
		}
	}
	if (flag==0)
	{
		return 1;
	}
}
int uppertriangle(int a[10][10], int n)
{
	int flag=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				if(a[i][j]!=0)
				{
					flag=1;
					return 0;
				}
			}
		}
	}
	if (flag==0)
	{
		return 1;
	}
}
int diagonal(int a[10][10], int n)
{
	int flag=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j||i<j)
			{
				if(a[i][j]!=0)
				{
					flag=1;
					return 0;
				}
			}
		}
	}
	if (flag==0)
	{
		return 1;
	}
}
void main()
{
	int a[10][10],i,n,choice,j;
	printf("\nEnter the side of square matrix\t");
	scanf("%d",&n);
	printf("\nEnter the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("\n\n1.Check for lower triangle\n2.Check for upper triangle\n3.Check for diagonal\n4.Exit");
	printf("\nenter the choice\t");
	scanf("%d",&choice);
	while(1)
	{
		switch(choice)
		{
			case 1 : if(lowertriangle(a,n)==1)
				printf("the matrix is lower triangle");
				else
				printf("the matrix is not lower triangle");
				break;
			case 2 : if(uppertriangle(a,n)==1)
				printf("the matrix is upper triangle");
				else
				printf("the matrix is not upper triangle");
				break;
			case 3 : if(diagonal(a,n)==1)
				printf("the matrix is daigonal matrix");	
				else
				printf("the matrix is not diagonal matrix");
				break;
			case 4 :exit(0);
		}

	printf("\nenter the choice\t");
	scanf("%d",&choice);
	}
}
	
