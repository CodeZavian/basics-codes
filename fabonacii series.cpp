#include<stdio.h>
int main()
{
	  // 0 1 2 3 4 5 6
	  int n,a=0,b=1,i,c;
     printf("enter number of term ....\n");
	  scanf("%d",&n);
	  for (i=1;i<=n;i++)
	  {
	         printf("%d ",a);
	     c=a+b;
	        a=b;
	           b=c;
	       }
	  
	  
}
/*	 
}*/

