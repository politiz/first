#include<stdio.h>
void main()
{  FILE*fp;
char ch;
int nol=0,not=0,nos=0,noc=0;
fp=fopen("f4.c","r");
while(1)
{  ch=getc(fp);
if(ch==EOF)
break;
noc++;
if(ch==' ')
nos++;
if(ch=='\n')
nol++;
if(ch=='\t')
not++;
}    fclose(fp);
printf("no of character =%d\n",noc);
printf("no of blanks=%d\n",nos);
printf("no of tabs =%d\n",not);
printf("no of lines=%d\n",nol);}