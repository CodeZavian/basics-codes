#include<stdio.h>
main()
{ 
  int a,b,c,d,e,f;
  printf("enter thr values\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  f=a;
  a=b;
  b=c;
  c=d;
  d=e;
  e=f;
  f=a;
  printf("mow the values after swaping is %d\n",a);
  printf("mow the values after swaping is %d\n",b);
  printf("mow the values after swaping is %d\n",c);
  printf("mow the values after swaping is %d\n",d);
  printf("mow the values after swaping is %d\n",e);
  
}
