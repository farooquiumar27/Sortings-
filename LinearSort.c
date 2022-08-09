#include<stdio.h>
#include<stdlib.h>

int main( )
{
int *x,y,e,f,g,req;
printf("Enter requirement: ");
scanf("%d",&req);
if(req<1)
{
printf("Invalid requirment.");
return 0;
}

x=(int *)malloc(sizeof(int)*req);

if(x==NULL)
{
printf("Unable to allocate %d amount of memory.",g);
return 0;
}

for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}

e=0;
while(e<req-1)
{

f=e+1;
while(f<req)
{
if(x[e]>x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
f++;
}
e++;
}


for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}

return 0;
}