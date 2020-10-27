#include<stdio.h>
#include<string.h>
#define size 10
struct stack
{
	char a[10];
	int top;
}st;
	void push(char ele)
	{
		if (st.top==size)
		{
			printf("\noverflow\n");
		}
		else
		{	st.top++;
			st.a[st.top]=ele;
			printf("\nElement  %c  inserted sucessfully\n",ele);
		}
	}
	char pop()
	{
		if (st.top==-1)
		{
			printf("\nUnderflow \nnothing to delete\n");
		}
		else
		{
			printf("\nElement %c deleted sucessfully\n",st.a[st.top]);
			return st.a[st.top--];
		}
	}
	void peek()
	{
		printf("%c",st.a[st.top]);
	}

void main()
{	
	int count=0,i;
	char s1[10],s2[10];
	printf("\nEnter the string\t");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		push(s1[i]);
		count++;
	}
	for(i=0;i<count;i++)
	{
		s2[i]=pop();
	}
	s2[i]='\0';
	printf("The reversed string is %s",s2);
	if(strcmp(s1,s2)==0)
	{
		printf("\nThis string is palindrome\n");
	}
	else
	{
		printf("\nThis string is not palindrome\n");
	}
}

