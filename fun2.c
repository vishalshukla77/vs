#include<stdio.h>
int factorial(int x)
{ int fact=1;
int i;
for( i=2;i<=x;i++)
{ fact=fact*i;}
return fact;}
int combination(int n,int r)
{ int ncr=factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}
int main()
{ int n;
printf("enter n");
scanf("%d",&n);
int i,j;
for(i=0;i<=n;i++)

{

     for(j=0;j<=i;j++){
int icj=combination(i,j);
printf("%d ",icj);
}
printf("\n");
}
return 0;
}
//another method
#include<stdio.h>
int factorial(int x)
{ int fact=1;
int i;
for( i=2;i<=x;i++)
{ fact=fact*i;}
return fact;}
int combination(int n,int r)
{ int ncr=factorial(n)/(factorial(r)*factorial(n-r));
return ncr;
}
int main()
{ int n;
printf("enter n");
scanf("%d",&n);
int i,j;
for(i=0;i<=n;i++)

{ int first=1;
for(j=0;j<=i;j++){
	printf("%d ",first);
	first=first*(i-j)/(j+1);
}
printf("\n");
}
return 0;
