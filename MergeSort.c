#include<stdio.h>
#include<stdlib.h>
int main( )
{
int *x,y,req,z;
int lb3,ub3,mid,e,f,a,b;
int i1,i2,i3,lb1,lb2,ub1,ub2;
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
int stack1[req][2],stack2[req][2],top1,top2;
int temp[req];
for(y=0;y<req;y++)
{
printf("Enter number: ");
scanf("%d",&x[y]);
}
//Logic for merge sort starts here.
top1=req;
top2=req;
lb3=0;
ub3=req-1;
top1--;
stack1[top1][0]=lb3;
stack1[top1][1]=ub3;
while(top1!=req)
{
a=stack1[top1][0];
b=stack1[top1][1];
top1++;
top2--;
stack2[top2][0]=a;
stack2[top2][1]=b;
mid=(a+b)/2;
if(mid>a)
{
top1--;
stack1[top1][0]=a;
stack1[top1][1]=mid;
}
if(mid+1<b)
{
top1--;
stack1[top1][0]=mid+1;
stack1[top1][1]=b;
}
}
while(top2!=req)
{
a=stack2[top2][0];
b=stack2[top2][1];
top2++;
mid=(a+b)/2;
lb1=a;
ub1=mid;
lb2=mid+1;
ub2=b;
lb3=lb1;
ub3=ub2;
i1=lb1;
i2=lb2;
i3=lb3;
while(i1<=ub1&&i2<=ub2)
{
if(x[i1]<x[i2])
{
temp[i3]=x[i1];
i1++;
}
else
{
temp[i3]=x[i2];
i2++;
}
i3++;
}
while(i1<=ub1)
{
temp[i3]=x[i1];
i1++;
i3++;
}
while(i2<=ub2)
{
temp[i3]=x[i2];
i2++;
i3++;
}
i3=lb3;
while(i3<=ub2)
{
x[i3]=temp[i3];
i3++;
}
}
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}