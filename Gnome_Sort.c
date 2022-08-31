//Gnome Sort.
#include<stdio.h>
#include<stdlib.h>
int main( )
{
int *x,y,j,g,req;
printf("Enter requirnment: ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requirnment.\n");
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
j=1;
while(j<req)
{
if(x[j-1]>x[j])
{
g=x[j-1];
x[j-1]=x[j];
x[j]=g;
j--;
}
else
{
j++;
}
if(j==0)j=1;
}
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
return 0;
}