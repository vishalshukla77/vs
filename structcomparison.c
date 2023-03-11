#include<stdio.h>
int main()
{ 
typedef struct date;
{ int date;
int month;
int year;
date;
date a,b;
a.day=5;
a.month=12;
a.year=1999;

b.day=19;
b.month=1;
b.yeatr=2023;
//this does not work
//if(a==b)
//printf("THE DATES ARE SAME");
//else
//printf("The dates are diffrent");
bool flag=true;
if(a.day!=b.day)
flag=false;
if(a.month!=b.month)
flag=false;
if(a.year!=b.year)
flag=false;

if(flag==true)
printf("the dates are same");
else the dates are different

return 0;
}
