#include<stdio.h>
#include<String.h>
int main()
{ int i,j;
char s1[]="college wallah";
/*char s2[]="college wallah";
char[0]='M';
printf("%s\n",s1);
printf("%s",s2);*/
int size=0;
int k=0;
while(s1[k]!='\0')
{ size++;
k++;

}
char s2[size];
for(i=0;i<=size;i++)
{ for(j=i;j<=i;j++)
{s2[j]=s1[i];}
}
printf("%s",s2);
return 0; 
}