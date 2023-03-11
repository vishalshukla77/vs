#include<stdio.h>
int main()
{ FILE *ptr;
fptr=fopen("sum.txt","r");
int a;
fscanf(fptr,"%d",&a);
int b;
fscanf(fptr,"%d",&b);
fclose(fptr);
fptr=fopen("sum.txt","w");
fprint(fptr,"%d",a+b);
fclose(fptr);


}
