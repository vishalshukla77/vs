#include<stdio.h>
#include<limits.h>
int main()
{ int r,c,i,j,b;
int max;
int sum=0;

printf("enter the rows and colums");
scanf("%d%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<r;i++)
{ for(j=0;j<c;j++)
{

sum =sum+a[i][j];
max=INT_MIN;
if(max<sum)
{
max=sum;
}

}
sum=0;
b=1;
}
printf("%d%d",max,b);
return 0;
}
