#include<stdio.h>
struct students
{ char name;
int roll;
int marks;
 } ;
int main()
{ int sum=0,avg=0,i; 
 struct students s[5];
 printf("enter the details of five student");
 for( i=0;i<5;i++)
 { scanf("%c%d%d",&s[i].name,&s[i].roll,&s[i].marks);
 getchar();
 }
 for( i=0;i<5;i++){
 
 printf("%c%d%d",s[i].name,s[i].roll,s[i].marks);
 printf("\n");
}
for( i=0;i<5;i++)
{ sum =sum+s[i].marks;
}
printf("the average marks of five student is %d",sum/5);
return 0;
}
