#include <stdio.h>
#include <math.h>
float f(float x){
    return x*x*x-2*x-5;
}

int main()
{
    int i = 0;
    float x1, x2,e=0.003;
    float  mid;
    printf("enter x1 : ");
    scanf("%f", &x1);
    printf("enter x2 : ");
    scanf("%f", &x2);

    if (f(x1)*f(x2) > 0)
    {   
        printf("\n value of function at x1 i.e. %f : %f ",x1,f(x1));
        printf("\n value of function at x2 i.e. %f : %f ",x2,f(x2));
        printf("\nGuess are wrong \n");
    }

    else
    {
        do
        {
            mid = (x1 + x2) / 2;
            if (f(mid) == 0)
            {
                printf("%f is the required root", mid);
            }
            else
            {
                if ((f(mid) * f(x1)) < 0)
                {
                    x2 = mid;
                }
                else
                {
                    x1 = mid;
                }
               
            }
             i++;
        printf("\n value of function at x1 i.e. %f : %f ",x1,f(x1));
        printf("\n value of function at x2 i.e. %f : %f ",x2,f(x2));
        printf("\n%d iterartion completed",i);

        } while (fabs(x2-x1)>=e);

        printf("\n%f is the required root in %d iteration", mid,i);
    }

    return 0;
}