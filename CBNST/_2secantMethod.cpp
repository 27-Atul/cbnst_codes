#include<iostream>
#include<math.h>

using namespace std;
float f(float x){
     return x*x*x*-9*x+1;
}
 void main(){
    float x1,x2,x3, epsilon;
    float fn, xn;
    int n;
    cout<<"enter the value of x1";
    cin>>x1;
    cout<<"enter the value of x2";
    cin>>x2;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0; i<n; i++){
        x3=((x1* f(x2))-(x2*f(x1)))/(f(x2)-f(x1));    
    }
    int f3= f(x3);
    if((x2-x1)/x2 < epsilon){    // (f(x2)==0)
            x1=x2;
            f1=f(x2);
            x2=x3;
    }         
    
}