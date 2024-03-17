Write a Program to Find Actual error, Relative Error and Percentage Error for π and √2.

#include<stdio.h>
#include<math.h>

void main()
{
float actual,approximate,actual_error,relative_error,percentage;
printf("\nEnter your Actual and Approximate Value");
scanf("%f%f",&actual,&approximate);
rootvalue=sqrt(actual);
actual_error=fabs(rootvalue-approximate);
relative_error= atual_error/rootvalue;
percentage=relative_error*100;
printf("\n Actual Error:%f",actual_error);
printf("\n Relative Error:%f",relative_error);
printf("\n percentage Error:%f",percentage);
}