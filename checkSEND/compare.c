#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
    return x * x * x - 9 * x + 1;
}

int regulaFalsi(float x1, float x2, float eps)
{
    int i = 0;
    float fn = 0, ffn = 0;

    if (f(x1) * f(x2) > 0)
    {
        printf("Intial Assumptions are wrong");
    }
    else
    {
        while (fabs(x1 - x2) >= eps)
        {
            fn = (x1 * (f(x2)) - x2 * (f(x1))) / (f(x2) - f(x1));
            ffn = f(fn);
            if (ffn * f(x1) < 0)
            {
                x2 = fn;
            }
            else
            {
                x1 = fn;
            }
            i++;
        }
    }
    return i;
}

int secant(float x1, float x2, float eps)
{
    int i = 0, n;
    float x3, f3 = 0;
    printf("Enter number of iteration\n");
    scanf("%d", &n);
    float f1 = f(x1);
    float f2 = f(x2);
    for (int i = 0; i < n; i++)
    {
        x3 = ((x1 * f2) - (x2 * f1)) / (f2 - f1);
        f3 = f(x3);
        if (fabs(f(x3)) < eps)
        {
            printf("%f is the answer", x3);

           
        }
        x1 = x2;
        f1 = f(x2);
        x2 = x3;
        f2 = f(x3);
        printf("\n Value of root:%f\n", x3);
        i++;
    }
    printf("root doesnt exits in given iteration");

}

int main()
{
    int ch;
    float x1, x2, eps = .003;
    int cont=1;

    printf("Enter Initial Assumption\n");
    scanf("%f", &x1);
    printf("\n");
    scanf("%f", &x2);
    do
    {
        printf("1. Regula Falsi || 2. Secant || 3.Exit : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            int i1=regulaFalsi(x1, x2, eps);
            break;
        case 2:
            int i2= secant(x1, x2, eps);
            break;
        case 3:
            exit(0);
        }
        printf("shwgjhsjh");
    scanf("%d",&cont);
    }
    while(cont==1);
    return 0;
}