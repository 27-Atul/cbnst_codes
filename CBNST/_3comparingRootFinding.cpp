// comparing two root finding method using Switch case...
#include<iostream>
#include<math.h>
using namespace std;
float f(float x){
    return (x*x*x-8*x+1);
}
float Secant(float x1, float x2){
    
}
float Regula_Falsi(float x1, float x2){

}

void main(){
    int ch;
    float x1,x2,count=1;
    cout<<"\n enter intial value";
    cin>>"%f%f, &x1,&x2";
    do{
        printf("enter choice \n1.. Secant \n 2..Regula_falsi\n 3..EXIT\n ");
        cin>>"%d,&ch";
        switch(ch){
            case 1: Secant(x1,x2);
                  break;
            case 2: Regula_Falsi(x1,x2);
                  break;
            case 3: exit(0);      
        }
        cout<<"\n do you want to continue !";
        cin>>"%d,&count";
    }while(count==1);
}