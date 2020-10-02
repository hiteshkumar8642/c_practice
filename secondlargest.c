#include<stdio.h>
void main() 
    { 
    	int input = -32768, max = -32768, secondMax = -32768,i=0,n;
    	printf("\nEnter the total numbers");
	scanf("%d",&n);
	while(i<n) 
    	{ 
    		scanf("%d", &input); 
    		i++;
    		if (input > max) 
    		{ 
    			secondMax = max; 
    			max = input; 
    		} 
    		else if (input > secondMax) 
    		{ 
    			secondMax = input; 
    		} 
    	} 
    	printf("%d", secondMax); 
    } 
