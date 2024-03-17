#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x*x-9*x+1;
}
void main()
{
    float x1, x2, xn, fn, epsilon=0.003;
    float delta=0.003;
    int  i=1;
    printf("Enter Initial Guess ");
    scanf("%f",&x1);
    scanf("%f",&x2);

    if(f(x1) * f(x2)>0){
        printf("wrong assuption");
        return;
    }
    
    do{
    if(fabs(f(x1) - f(x2)< 0))
    {
        printf("Slope is too small");
        xn= (x1 * f(x2) *x2 * f(x1))/ (f(x2) - f(x1));
        fn= f(xn);
        if(f(xn) *f (x1)<0)
        {
        x2=xn;
        }
    }
    else{
        x1=xn;
        printf("Root after %d iteration: %f" , i,xn);
        printf("vlaue of function: %f",xn, f(xn));
        i=i+1;
    }
    }while(fabs(x2-x1)>epsilon);
}
