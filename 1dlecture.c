//reverse printing of arrays
#include<stdio.h>
/*int main()
{ int n,i;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter the elements of array\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("the reverse array is \n");
for(i=4;i>=0;i--)
{printf("%d",a[i]);}
return 0;
}*/
//given an array of marks of student,if the marks
//of any student is less than 35 print its roll no. ie its index
#include<stdio.h>
int main()
{ int a[10]={20,10,30,50,40,45,46,78,34,67};
int i;
for(i=0;i<9;i++)
{ if(a[i]<35)
printf("%d",i)}
 return 0;
}
}