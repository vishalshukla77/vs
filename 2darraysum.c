#include<stdio.h>
int main()
{ int r1,c1,i,j ;
int a[r1][c1],b[r1][c1],c[r1][c1];
printf("enter the rows and column");
scanf("%d%d",&r1,&c1);
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
{ scanf("%d",&a[i][j]);
}
}
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
{ scanf("%d",&b[i][j]);
}
}
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
{ c[i][j]=a[i][j]+b[i][j];
printf("%d",c[i][j]);
}
printf("\n");

}

return 0;

}



