#include<stdio.h>
#include<string.h>
int main()
{ char str[]="collge wallah";
str[0]="Physics wallah";
str[0]='p';//in normal initialisation we can modify indiviual declaration but not the entire string
//in pointer we can modify entire string but not the individual character
printf("%s",str);
return 0;

 }