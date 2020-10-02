#include<iostream>
#include<cstdio>
#include<string>
#include<ctype.h>
using namespace std;
#define size 10
struct stack
{
	int a[size];
	int top;
}s1;
	void push(int ele)
	{
		if (s1.top==size)
		{
			cout<<"\noverflow\n";
		}
		else
		{
			s1.a[++s1.top]=ele;
			cout<<"\nelement inserted sucessfully\n";
		}
	}
	int pop()
	{
		if (s1.top==-1)
		{
			cout<<"\nunderflow \nnothing to delete\n";
			return -1;
		}
		else
		{	int b;
			cout<<"element deleted sucessfully";
			b=s1.a[s1.top];
			s1.top--;
			return b;
		}
	}
	void disptop()
	{
		cout<<s1.a[s1.top-1];
	}
int main()
{
	s1.top=-1;
	int ele,choice,ret_ele;
	while(1)
	{	
		cout<<"\n1.push\n2.pop\n3.Display top\n4.exit\n";
		cout<<"\nenter the choice\t";
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"\nenter the element to insert\t";
				 cin>>ele;
				 push(ele);
				 break;
			case 2 : ret_ele=pop();
				 cout<<"\n deleted element is "<<ret_ele;
				 break;
			case 3 : disptop();
				 break;
			case 4 : exit(0);
			default : cout<<"\nenter the correct choice\t";
				  cin>>choice;
		}
	}
	return 0;
}



