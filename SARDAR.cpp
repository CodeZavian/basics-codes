#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{  
  int radius;
  int volume;
   scanf("%if",&radius);
  volume = PI * 4/3* pow(radius,3);
  scanf("%d",&volume);
   printf("the volume of the sphere is:%if",volume);
   return 0;
}
