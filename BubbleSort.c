#include<stdio.h>
#include<stdlib.h>

int main( )
{
int *x,y,e,f,m,req,g;
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
printf("Unable to allocate %d amount of memory.",req);
return 0;
}

for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}

m=req-2;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[e]>x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
e++;
f++;
}
m--;
}


for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}

return 0;
}