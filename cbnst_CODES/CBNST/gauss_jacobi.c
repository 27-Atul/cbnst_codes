#include<stdio.h>
#include<math.h>
#define E 0.001
float f1(float y, float z)
{
    return (3+5*y+2*z)/10;
}
float f2(float x, float z)
{
    return (-3 -4*x -3*z)/-10;
}
float f3(float x, float y)
{
    return (-3-x-6*y)/10;
}
int main()
{
    int i,maxI;
    float x=0,y=0,z=0,x1,y1,z1;
    printf("Enter max. number of iterations = ");
    scanf("%d",&maxI);
    for(i=0;i<maxI;i++)
    {
        x1=f1(y,z);
        y1=f2(x,z);
        z1=f3(x,y);
        if(fabs(x1-x)<E && fabs(y1-y)<E && fabs(z1-z)<E)
        {
            printf("Total iterations = %d\n",i+1);
            printf("Final Value of x = %f\nFinal Value of y = %f\nFinal Value of z = %f\n",x1,y1,z1);
            return 0;
        }
        x=x1;
        y=y1;
        z=z1;
        printf("After iteration %d,\tx=%f, y=%f, z=%f\n",i+1,x1,y1,z1);
    }
    printf("Total iterations = %d\n",i);
    printf("Final Value of x = %f\nFinal Value of y = %f\nFinal Value of z = %f\n",x1,y1,z1);
    return 0;
}
