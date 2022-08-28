#include<stdio.h>
#include<stdlib.h>
int main( )
{
int *x,lb,ub,y,req,e,f,g,largest,size,temp;
printf("Enter your requirnment: ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirnment.");
return 0;
}
x=(int *)malloc(sizeof(int)*req);
if(x==NULL)
{
printf("Unable to allocate that much amount of memory for %d numbers,",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}
//Logic for PanCake starts here 
size=req;
while(size>0)
{
lb=0;
ub=size-1;
largest=x[0];
temp=0;
for(y=0;y<size;y++)
{
if(largest<x[y])
{
largest=x[y];
temp=y;
}
}
e=lb;
f=temp;
while(e<f)
{
 g=x[e];
x[e]=x[f];
x[f]=g;
e++;
f--;
}
e=lb;
f=ub;
while(e<f)
{
g=x[e];
x[e]=x[f];
x[f]=g;
e++;
f--;
}
size--;
}
//Logic for PanCake ends here
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}