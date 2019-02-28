#include<stdio.h>
#include<conio.h>
void main()
{
int k,d,p;
printf("enter a character");
scanf("%d%D%D",&k,&d,&p);
if(k>d)
{
if(k>p)
{
printf("%d is the largest",k);
}
else
{
printf("%d is an largest",p);
}
}
else
{
if(d>p)
{
printf("%d is the largest",d);
}
else
{
printf("%d is the largest",p);
}
}
getch();
}
