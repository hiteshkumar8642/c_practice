#include<stdio.h> 
#define NIL -1 
#define MAX 100 
  
int lookup[MAX]; 
  
void initialize() 
{ 
  int i; 
  for (i = 0; i < MAX; i++) 
    lookup[i] = NIL; 
} 
  
int fib(int n) 
{ 
   if (lookup[n] == NIL) 
   { 
      if (n <= 1) 
         lookup[n] = n; 
      else
         lookup[n] = fib(n-1) + fib(n-2); 
   } 
  
   return lookup[n]; 
} 
  
void main () 
{ 
  int n ,i,res;
  printf("\nenter the value of n\t");
  scanf("%d",&n); 
  initialize(); 
  res=fib(n);
  for(i=0;i<n;i++)
  {
	  printf("%d\t",lookup[i]);
  }
}
