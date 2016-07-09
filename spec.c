#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,n,c=0;
clrscr();
gets(a);
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(!(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))
c++;
}
if(c>1)
printf("%d",c);
getch();
}
