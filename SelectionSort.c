#include<stdio.h>
#include<stdlib.h>

int main( )
{
int *x,y,lb,ub,si,req,g;
printf("Enter requirment: ");
scanf("%d",&req);

if(req<1)
{
printf("Invalid requirment.");
return 0;
}

x=(int *)malloc(sizeof(int)*req);

if(x==NULL)
{
printf("Unable to allocate memory for %d numbers.");
return 0;
}

for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}

lb=0;
ub=req-1;

while(lb<ub)
{
si=lb;
y=lb+1;
while(y<=ub)
{
if(x[y]<x[si])
{
si=y;
}
y++;
}

g=x[lb];
x[lb]=x[si];
x[si]=g;

lb++;
}

for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}