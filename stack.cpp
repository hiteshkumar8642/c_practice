#include<iostream>
using namespace std;
#define size 10
class stack
{
	int a[size];
	int top;
	public:
	void push(int ele)
	{
		if (top==size)
		{
			cout<<"\noverflow\n";
		}
		else
		{
			a[top++]=ele;
			cout<<"\nelement inserted sucessfully\n";
		}
	}
	void pop()
	{
		if (top==0)
		{
			cout<<"\nunderflow \nnothing to delete\n";
		}
		else
		{
			top--;
			cout<<"element deleted sucessfully";
		}
	}
	void display()
	{
		int i;
		for (i=0;i<top;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
}s1;
int main()
{
	int ele,choice;
	while(1)
	{	
		cout<<"\n1.push\n2.pop\n3.display\n4.exit\n";
		cout<<"\nenter the choice\t";
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"\nenter the element to insert\t";
				 cin>>ele;
				 s1.push(ele);
				 break;
			case 2 : s1.pop();
				 break;
			case 3 : s1.display();
				 break;
			case 4 : exit(0);
			default : cout<<"\nenter the correct choice\t";
				  cin>>choice;
		}
	}
	return 0;
}



