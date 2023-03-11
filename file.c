#include<stdio.h>
int main()
{ FILE *fptr;
fptr=fopen("newtest.txt","r");
if(fptr==NULL)
{ printf("file doesn't exist\n");
}
else{
fclose(fptr);
}
return 0;
}
// r open to read
// rb open to read in binary
//w open to write
//wb open to write in binary
//a open to append

