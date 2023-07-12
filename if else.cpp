 
#include<stdio.h> 
int main () 
{ 
 int marks,total,percent; 
 printf("Enter the marks obtained :\n"); 
 scanf("%d", &marks); 
 printf("Enter the total marks of the subject:\n"); 
 scanf("%d",&total); 
 percent= (marks*100)/total; 
 if (percent>=50) 
 { 
 printf("Congratulations you have passed this subject\n"); 
 } 
 else
 printf(" Sorry you did not pass this course\n");
 return 0;

}
