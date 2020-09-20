#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int a=0,i=0,A=0,n=0,s=0;
	char p[20];
	printf("\nEnter the password\t");
	scanf("%s",p);
	for(i=0;i<strlen(p);i++)
	{
		if(isupper(p[i]))
			A=1;
		else if(isdigit(p[i]))
			n=1;
		else if(islower(p[i]))
			a=1;
		else
			s=1;
	}
	if(a==0 || A==0 || n==0 || s==0)
	{
		printf("\nYour password is weak because\n");
	}
	if(strlen(p)>14)
	{
		printf("\nPassword is too long\n");
	}
	if(strlen(p)<6)
	{
		printf("\nPassword is too short\n");
	}
	if(a==0)
	{
		printf("\nlowercase alphabet missing\n");
	}
	if(A==0)
	{
		printf("\nUppercase alphabet missing\n");
	}
	if(n==0)
	{
		printf("\nNumber is missing\n");
	}
	if(s==0)
	{
		printf("\nSpecial character missing\n");
	}
	if(a==1 && A==1 && n==1 && s==1)
	{
		printf("\nYour password is strong\n");
	}
}
