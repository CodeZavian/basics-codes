#include<stdio.h>
main()
{
	  int number,reverse,digit=0;
	  printf("enter the number\n");
	  scanf("%d",&number);
	  while(number!=0)
	  {
	  	   
	  	    digit = number %10;
	  	    number = number /10;
	  	    reverse = digit;
	  	    printf("%d",reverse);
	  	    
			  }
			  
	 
	  
	  
}
	  