#include<stdio.h>
#include<conio.h>
void swap(int *c,int *d);
void main()
{
int a,b;
printf("enter the two numbers");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("after swapping a is :%d and b is :%d",a,b);
getch();
}
void swap(int*c,int*d)
{
int x;
x=*c;
*c=*d;
*d=x;
}
