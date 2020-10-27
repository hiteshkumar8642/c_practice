#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0,count1=0;
	char a[100];
	printf("\nEnter the string\t");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
			count++;
		else
			count1++;
	}
	printf("\nthe number of vowels are %d",count);
	printf("\nthe number of consonant are  %d\n",count1);
}
