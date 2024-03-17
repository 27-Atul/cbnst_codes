Write a Program to Find Root of the Function Using Bisection Method.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float x)
{
return x * x * x-9*x+1;
}

void main()
{
float x1,x2;
float xmid;
int i=1;
printf("\n enter Initial Guess:");
scanf("%f",&x1);
scanf("%f",&x2);
if(f(x1)*f(x2)>0)
{
printf("\n Assumptions are Wrong");
exit(1);
}

do

{
xmid=(x1+x2)/2;
printf("\nxmid is:%f",xmid);
if(f(xmid)==0)
{
printf("\n Root is %f",xmid);
exit(1);
}
if(f(xmid)*f(x1)<0)
x2 =xmid;
else
x1=xmid;
i=i+1;
printf("\n Root after %d iteration:%f",i,xmid);
}
while(fabs(x1-x2)>=0.003);
}