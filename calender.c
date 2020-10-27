#include<stdio.h>
void main()
{
	int i ,year,count;
	char week[7][10]={"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
	printf("\nEnter the year\t");
	scanf("%d",&year);
	for(i=1;i<year;i++)
	{
		if((year%400==0)||(year%4==0 && year%100 !=0) )
		{
			count=count+2;
		}
		else
		{
			count=count+1;
		}
	}
	count=count%7;
	printf("\nThe week day of the 1st january of %d is %s\n",year,week[count]);

}
