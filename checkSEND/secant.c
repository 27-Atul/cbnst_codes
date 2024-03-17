#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f(float x){
    return x*x*x-9*x+1;
}


int main()
{
    float f1,f2,x1,x2,x3,eps=0.003,f3;
    int n=0,g=0;

printf("Enter 1 root\n");
scanf("%f",&x1);
printf("Enter 2 root\n");
scanf("%f",&x2);
printf("Enter number of iteration\n");
scanf("%d",&n);
f1=f(x1);
f2=f(x2);
for(int i=0;i<n;i++){
    x3=((x1*f2)-(x2*f1))/(f2-f1);
    f3=f(x3);
    if(fabs(f(x3))<eps){
    printf("%f is the answer",x3);
    //g++;
    //break;
    exit(1);
    }
    x1=x2;
    f1=f(x2);
    x2=x3;
    f2=f(x3);
    printf("\n Value of root:%f",x3);

}
    printf("root doesnt exits in given iteration");

return 0;
}