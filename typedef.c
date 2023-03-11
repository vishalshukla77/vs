#include<stdio.h>
int main()
{ int x=5,y=7;
int* a=&x,b=&y;// this throughs an error
printf("%p\n",a);
printf("%p\n",b);
return 0;
}
but 
/*typedef int* pointer;
pointer a=&x, b=&y;
printf("%p\n",a);
printf("%p\n",b);
return 0;

