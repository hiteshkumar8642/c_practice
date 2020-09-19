#include<stdio.h>
#include<string.h>
void permutation(char a[],int m,int n)
{
	int i;
	char k,t[10];
	strcpy(t,a);
	if(m==n-1)
	{
		printf("%s",a);
	}
	else
	{
		for(i=m;i<n;i++)
		{
			k=t[i];
			t[i]=t[m];
			t[m]=k;
			permutation(t,m+1,n);
			printf("\n");
		}
	}
}
void main()
{
	int i;
	char a[10];
	printf("\nEnter the string\t");
	scanf("%s",a);
	permutation(a,0,strlen(a));

}
