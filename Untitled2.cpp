#include<stdio.h>
int main()
{ int sum=0,i; 
float avg;
struct students
{ char name;
int roll;
int marks;
 } ;
 struct students s[5];
 printf("enter the details of five student");
 for( i=0;i<5;i++)
 { scanf("%c%d%d",&s[i].name,&s[i].roll,&s[i].marks);
 }
 printf("\n");
 for( i=0;i<5;i++){
 
 printf("%c%d%d",s[i].name,s[i].roll,s[i].marks);
 sum = sum + s[i].marks;
 printf("\n");
}
avg=(sum/5);
printf("the average marks of five student is %f",avg);
return 0;
 
 
}
