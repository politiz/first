
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0,num;
//clrscr();
printf("enter number\n");
scanf("%d",&n);
num=n;
while(num>0)
{
r=num%10;
s=s+(r*r*r);
num=num/10;
}
if(s==n)
printf("armstrong\n");
else
printf("not armstrong\n");
getch();
}
