//program to display a file with line numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{ FILE *fp;
char ch,source[67];
int count=1;
printf("enter file name:");
scanf("%s",source);
fp=fopen(source,"r");
if(fp=NULL)
{ puts("unable to open a file");
exit(0);

}
printf("\n%d:",count);
while(ch=getc(fp)!=EOF)
{ if(ch=='\n')
{ count++;
printf("%c",ch);
}
else
printf("%c",ch);
}
fclose(fp);
return 0;
}


//append content of one file at end of another
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
{ FILE *fs *ft;
char source[67],target[67],str[80];
puts("Enter source file name:");
gets(source);
puts("Enter target file name:");
gets(target);
fs=fopen(source,"r");
if(fs==NULL)
{ puts("Unable to open source file");
exit(0);
ft=fopen(target,"a");
 if(ft==NULL)
 { fclose(fs);
 puts("unable to open target file");
 exit(0);
}
while( fgets(str,79,fs)!=NULL)
fputs(str,ft);
printf("Appending file completed");
fclose(fs);
fclose(ft);
return 0;
}
