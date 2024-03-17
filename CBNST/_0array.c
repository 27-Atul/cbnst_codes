/*    Type of ERROR
  -> INstrument 
  -> Data
  -> Computer

    -> Actual ERROR = [Actual value-Approx]   => pi-3.14 = 0.001592
    ->Relative ERROR = [Actual Error/Actual value]   => 0.001592/pi
    ->Percentage = relative *100

*/    

// BISESCTION METHOD....

#include<stdio.h>
#include<math.h>
  float f(float x){
    return x*x*x-9*x+1;
  }

void main()
{
    float x1, x2, error, xmid;
    int i=1;
    printf("Enter Initial Guess ");
    scanf("%f",&x1);
    scanf("%f",&x2);
    if(f(x1)*f(x2>0))
    {
      printf("Value of funcrion at x1 i.e. %f: %f" , x1, f(x1));
      printf("Value of funcrion at x1 i.e. %f: %f" , x2, f(x2));
      printf("Assumption is wrong");
      return;  //for terminating the progress.
    }

    do
    {
      xmid=(x1+x2)/2;
      if(f(xmid)==0){
        printf("Root is %f", xmid);}
      if(f(xmid)* f(x1)<0){
        x2=xmid;
      }
      else{
        x1=xmid;
        printf("Value of root at %d iteration is %f", i, xmid);
        printf("Value of root at %d iteration is %f", xmid, f(xmid));
        i=i+1;
        error=fabs(x2-x1);
      }  
    }while (error>=0.003);
}