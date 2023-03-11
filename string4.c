#include<stdio.h>
int main()
{ char str[]="college wallah";
//char* ptr=&str[0];
printf("%p\n",&str[0]);
printf("%p",str);//ptr now points to the first element
int i=0;
while(*ptr!='\0')
{ printf("%c",*ptr);
ptr++;
i++;}
return 0;
}