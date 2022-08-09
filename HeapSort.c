#include<stdio.h>
#include<stdlib.h>

int main( )
{
int *x,y,req,lb,ub;
int ri,ci,g;
int lci,rci,swi;
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
printf("Unable to allocate memory for %d number,",req);
return 0;
}

for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}

//createMaxHeap
lb=0;
ub=req-1;
y=lb+1;

while(y<=ub)
{
ci=y;
while(ci>lb)
{
ri=(ci-1)/2;

if(x[ri]<x[ci])
{
g=x[ri];
x[ri]=x[ci];
x[ci]=g;
ci=ri;
}
else
{
break;
}

}

y++;
}

while(lb<ub)
{
g=x[lb];
x[lb]=x[ub];
x[ub]=g;
ub--;

ri=lb;
while(ri<ub)
{
lci=(2*ri)+1;
rci=lci+1;
if(lci>ub)
{
break;
}
if(rci>ub)
{
swi=lci;
}
else
{
if(x[lci]>x[rci])
{
swi=lci;
}
else
{
swi=rci;
}
}
if(x[swi]>x[ri])
{
g=x[ri];
x[ri]=x[swi];
x[swi]=g;
ri=swi;
}
else
{
break;
}
}
}

for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}