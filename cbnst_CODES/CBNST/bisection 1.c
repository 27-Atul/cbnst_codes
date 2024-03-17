#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001
float findvalueat(float x)
{
    return x-log10(x)-1.2;
}
float bisect(float x1, float x2)
{
    return (x1+x2)/2;
}
int main()
{
    int maxIteration, i=1;
    float x1, x2, x, x3;
    printf("Enter maximum number of iterations =>");
    scanf("%d",&maxIteration);
    do
    {
        printf("Enter the value for x1 and x2\t");
        scanf("%f %f", &x1, &x2);
        if(findvalueat(x1)*findvalueat(x2)>0)
        {
            printf("Roots are invalid");
            continue;
        }
        /*else
        {
            printf("Roots lie between %f and %f\n", x1, x2);
        }*/
        break;
    }while(1);
    x=bisect(x1,x2);
    do
    {
        if(findvalueat(x1)*findvalueat(x)<0)
            x2=x;
        else if(findvalueat(x)*findvalueat(x2)<0)
            x1=x;
        printf("Iterations= %d\tRoots=%f\n",i,x);
        x3=bisect(x1,x2);
        if(fabs(x3-x)<EPSILON)
        {
            printf("\n\nRoot after  %d iterations = %f (approx)",i,x);
            return 0;
        }
        x=x3;
        i++;
    }while(i<=maxIteration);
    printf("\n\nRoot after  %d iterations = %f (approx)",--i,x);
    return 0;
}
