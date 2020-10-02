#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
bool IsBalanced(string str)
{
	int strPos=-1;
	if (str.size() == 0)
		return true;
	string findStr[] = {"()", "[]", "{}"};
	for (int i =0; i < 3; i++)
	{
		strPos = str.find(findStr[i]);
		if (strPos >=0) 
			break;
	}
	if (strPos >=0)
		return IsBalanced(str.substr(0, strPos) + str.substr(strPos+2));	
	return false;
}
int main()
{	
	char str[20];
	printf("\nEnter the string\t");
	scanf("%s",str);
	if(IsBalanced(str))
		printf("\nbalanced\n");
	else
		printf("\nNot balanced\n");
}
