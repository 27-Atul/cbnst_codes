#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001
float valueoffx(float x)
{
return x*x*x - 5*x +1;
}
float findx(float x1, float x2)
{

return (x1*valueoffx(x2) - x2*valueoffx(x1))/(valueoffx(x2)-valueoffx(x1));
}
int main()
{
int n,i=1;
float x1,x2,x;
printf("Enter the value for x1  and x2 = ");
scanf("%f %f",&x1,&x2);
printf("Enter no. of iterations = ");
scanf("%d",&n);

x=findx(x1,x2);
do
{
    x1=x2;
    x2=x;
    x=findx(x1,x2);
    printf("Iteration = %d Root = %f\n",i,x2);
    if(fabs(x-x2)<EPSILON)
    {
        printf("\nFinal root = %f, Total iterations = %d",x,++i);
        return 0;
    }
    i++;
}while(i<=n);
printf("\nFinal root = %f, Total iterations = %d",x,--i);
return 0;
}
