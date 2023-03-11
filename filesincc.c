#include<stdio.h>
int main()
{ FILE *fptr;
fptr=fopen("odd.txt","W");
int i,n;
printf("enter n:");
scanf("%d",&n);
for( i=1;i<=n;i++)
{ if(i%2!=0){
fprintf(fptr,"%d\n",i);
}
}
fclose(fptr);
return 0;

}
