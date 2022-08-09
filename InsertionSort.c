#include<stdio.h>
#include<stdlib.h>

int main( )
{
int *x,y,z,lb,ub,req,num;
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
printf("Unable to allocate memory for %d numbers.",req);
return 0;
}

for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}

lb=0;
ub=req-1;
y=lb+1;
while(y<=ub)
{
num=x[y];
z=y-1;
while(z>=lb&&x[z]>num)
{
x[z+1]=x[z];
z--;
}
x[z+1]=num;
y++;
}

for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}

return 0;
}