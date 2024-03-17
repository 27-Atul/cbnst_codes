#include<stdio.h>
int n;
 void uppertriangle(float arr[][n+1], int n)
{
int i,j,k,b,c,count=0;
float ratio;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(j>i)
        {
            count++;
        ratio=arr[j][i]/arr[i][i];
        for(k=0;k<n+1;k++)
            arr[j][k]=arr[j][k]-(ratio *arr[i][k]);

        printf("\nIntermediate forms : \n");
        for(b=0;b<n;b++)
        {
        for(c=0;c<n+1;c++)
            printf("%f\t",arr[b][c]);
        printf("\n");
        }
        printf("\n");
        }
    }
}
printf("Total transformations = %d\n",count);
}
void backsbstitue(float arr[][n+1],float value[n],int n)
{
    int i,j;
    float sum;
    value[n-1]=arr[n-1][n]/arr[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
            sum=sum+arr[i][j]*value[j];
        value[i]=(arr[i][n]-sum)/arr[i][i];
    }
}
void show(float value[],int n)
{
int i;
printf("Values of unknowns are:\n");
for(i=0;i<n;i++)
    printf("Value[%d]=%f\n",i,value[i]);
}
int main()
{
int i,j,k;
printf("Enter the number of unknowns=>");
scanf("%d",&n);
float arr[n][n+1],value[n];
printf("Enter your augmented matrix=>\n");
for(i=0;i<n;i++)
{
    for(j=0;j<n+1;j++)
    {
        scanf("%f",&arr[i][j]);
    }
}
uppertriangle(arr,n);
backsbstitue(arr,value,n);
show(value,n);
return 0;
}
