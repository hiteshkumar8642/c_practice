#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int lb,int mid,int ub)
{	int i,j,k;
	int ln=mid-lb+1;
	int un=ub-mid;
	int L[ln],R[un];
	for(i=0;i<ln;i++)
	{
		L[i]=a[lb+i];
	}
	for(i=0;i<un;i++)
	{
		R[i]=a[mid+1+i];
	}
	i=0,j=0,k=lb;
	while(i<ln && j<un)
	{
		if(L[i]<R[j])
			a[k]=L[i++];
		else
			a[k]=R[j++];
		k++;
	}
	while(i<ln)
	{
		a[k++]=L[i++];
	}
	while(j<un)
	{
		a[k++]=R[j++];
	}
}
void mergesort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{	mid=lb+(ub-lb)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

void main()
{
	int a[10];
	int i,lb,ub,n;
	printf("\nenter the number of elements\t");
	scanf("%d",&n);
	printf("\nenter the elements\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{	
		printf("%d\t",a[i]);
	}
	mergesort(a,0,n-1);
	printf("\nsorted array\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

