#include<stdio.h>
#include<stdlib.h>


int main( )
{
int *x,y,req;
int pp,lb,ub,a,b,e,f,top,num,g;

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

int stack[req][2];

for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}
lb=0;
ub=req-1;
top=req;

top--;
stack[top][0]=lb;
stack[top][1]=ub;

while(top!=req)
{
a=stack[top][0];
b=stack[top][1];
top++;

//Logic to find pp of lb-ub. 
e=a;
f=b;
num=x[e];
while(e<f)
{
while(x[e]<=num&&e<ub)
{
e++;
}
while(x[f]>num)
{
f--;
}
if(e<f)
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
else
{
g=x[a];
x[a]=x[f];
x[f]=g;
pp=f;
}
}
//Logic to find pp ends here.
if(pp-1>a)
{
top--;
stack[top][0]=a;
stack[top][1]=pp-1;
}
if(pp+1<b)
{
top--;
stack[top][0]=pp+1;
stack[top][1]=b;
}
}



for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}

return 0;
}