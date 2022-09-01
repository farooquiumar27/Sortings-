//Odd Even Sort || Brick Sort.
#include<stdio.h>
#include<stdlib.h>
int main( )
{
int *x,y,e,f,g,count,req;
printf("Enter requirnment: ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirnment.");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate memory for %d numbers.\n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}
count=1;
while(count)
{
count=0;
e=1;
f=2;
while(e<req&&f<req)
{
if(x[e]>x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
count++;
}
e=e+2;
f=f+2;
}
e=0;
f=1;
while(e<req&&f<req)
{
if(x[e]>x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
count++;
}
e=e+2;
f=f+2;
}
}
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}