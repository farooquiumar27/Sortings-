#include<stdio.h>
#include<stdlib.h>
int main( )
{ 
int *x,y,req;
int lb,ub,dc,e,f,i,digit,a,num;
printf("Enter requirment: ");
scanf("%d",&req);
if(req<1)
{
printf("Invalid requirment.");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
int queue[10][req],front[10],rear[10];
for(y=0;y<10;y++)
{
front[y]=0;
rear[y]=0;
}
if(x==NULL)
{
printf("Unable to allocate memory for %d numbers.",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}
//Logic for radix sort starts here.
lb=0;
ub=req-1;
num=x[0];
for(y=1;y<req;y++)
{
if(x[y]>num)num=x[y];
}
dc=1;
while(num>9)
{
num=num/10;
dc++;
}
for(y=0;y<req;y++)
{
printf("rear[y]=%d and fornt[y]=%d\n",rear[y],front[y]);
}
e=10;
f=1;
a=0;
while(a<dc)
{
for(i=0;i<req;i++)
{
num=x[i];
digit=(num%e)/f;
queue[digit][rear[digit]]=num;
rear[digit]++;
}
num=0;
digit=0;
while(num<req&&digit!=10)
{
while(rear[digit]!=0)
{
x[num]=queue[digit][front[digit]];
front[digit]++;
num++;
if(front[digit]==rear[digit])
{
front[digit]=0;
rear[digit]=0;
}
}
digit++;
}
e=e*10;
f=f*10;
a++;
}
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}