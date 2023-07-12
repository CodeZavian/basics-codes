#include<stdio.h>
main()
{
	  int num,i;
	  printf("enter the number\n");
	  scanf("%d ",&num);
	  for(i=1;i<=num;i++)
	  printf("%d ",i);
	   for(int k=1;k<=num;k++)
	   printf("+ ");
	   for(int a=1;a<=num;a++)
	   printf("- ");
	   for(int b=1;b<=num;b++)
	   printf("* ");
	   
}
