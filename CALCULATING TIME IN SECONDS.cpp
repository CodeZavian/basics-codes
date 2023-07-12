#include<stdio.h>
main ()
{ 
  int hours,minutes,seconds,time_in_seconds;
  printf("enter the time in hours\n");
  scanf("%d",&hours);
  printf("enter the time in minutes\n");
  scanf("%d",&minutes);
  printf("enter the time in seconds\n");
  scanf("%d",&seconds);
  printf("now the time in seconds is %d",(hours*3600)+(minutes*60)+seconds);
  
}


