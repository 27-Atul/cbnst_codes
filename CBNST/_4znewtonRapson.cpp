//Newton Rapson method
#include<iostream>
#include<math.h>
using namespace std;
float func(float x){
    return x*x*x-9*x+1;
}
float derivFunc(float x){
    return 3*x*x-5;
}
void main(){
    float x0=0, epsilon=0.003;
    int n;
    cout<<"enter the number of iteration";
    cin>>n;
    for(int i=0; i<n; i++){
            if(derivFunc(x0)<0){
                cout<<"Slope is two small and Exit it";
            }
        float x1= x0-(func(x0)/derivFunc(x0));  
        float diff =fabs(x1-x0);
        x0 = x1;
       if(diff < epsilon){
         cout<<"x1 and exit";
       }
    }
    cout<<"solution do not exist in given iteration...";  
}
