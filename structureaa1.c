#include<stdio.h>
#include<string.h>
int main()
{ struct book
{ char name[50];
int noofpages;
float price;

}

b1,b2,b3;

b1.noofpages=100;
b1.price=411.5;
strcpy(b1.name,"secret seven");
//a.nane="secret seven";
//we can use strcpy for such things like strcpy(ch, secret seven);
//agar declare kor diya with out initialising then individual character ko bhar na padega 

// char array or array ko declare k sath initialise 
printf("%d\n",b1.noofpages);
printf("%f\n",b1.price);
printf("%s\n",b1.name);

return 0; }
