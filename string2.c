#include<stdio.h>
int main()
/*{ char str[]="college wallah is best";
puts("Hello Everyone");
return 0;
}*/
{ char str[40];
//scanf("%s",str);// only the first word will be considered
gets(str);//complete line taking same thing could be done by scanf
// scanf("[^n]s",str)
printf("your input was: %s",str)

}