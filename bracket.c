#include<stdio.h>
#include<string.h>
struct stack
{
	char a[10];
	int top;
}st;
	void push(char ele)
	{
		if(st.top==10)
		{
	//		printf("\noverflow\n");
		}
		else
		{	st.top++;
			st.a[st.top]=ele;
		}
	}
	char pop()
	{
		if(st.top==-1)
		{
		//	printf("\nUnderflow \nnothing to delete\n");
		}
		else
		{
			return st.a[st.top--];
		}
	}

void main()
{	
	st.top= -1;	
	int flag=0,i;
	char s1[10],choice;
	printf("\nEnter the string\t");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{	if(s1[i]=='('||s1[i]=='['||s1[i]=='{')
		{
			push(s1[i]);
		}
		else if(s1[i]==')'||s1[i]==']'||s1[i]=='}')
		{	
			switch(s1[i])
			{
				case '}':choice=pop();
					if(choice!='{')
						flag=1;
					break;
				case ']':choice=pop();
                                        if(choice!='[')
                                                flag=1;
                                        break;
				case ')':choice=pop();
                                        if(choice!='(')
                                                flag=1;
                                        break;

			}
		}

	}
	 if(flag==1||st.top!=-1)
                {       printf("\nThis is not correct sequence of brackets");
                       
                }

	if(flag!=1&&st.top==-1)
	printf("\nThis is correct sequence of brackets");
	
}

