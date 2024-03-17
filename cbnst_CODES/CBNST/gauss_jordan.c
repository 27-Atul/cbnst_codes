#include<stdio.h>
int n;
void findvalue(float arr[][n+1])
{
    for(int i=0;i<n;i++)
    {
            printf("Value of unknown %d = %f\n",i+1,arr[i][n]/arr[i][i]);
    }
}
void  diagonal(float arr[][n+1])
{
int i,j,k,count=0;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i!=j)
        {
            count++;
            float ratio=arr[j][i]/arr[i][i];
            for(k=0;k<n+1;k++)
                arr[j][k]=arr[j][k]- (ratio*arr[i][k]);
            printf("Intermediate forms : \n");
            for(int b=0;b<n;b++)
            {
                for(int c=0;c<n+1;c++)
                    printf("%f\t",arr[b][c]);
                printf("\n");
            }
            printf("\n");
        }
    }
    }
printf("No of transformations = %d\n",count);
findvalue(arr);
}
int main()
{
printf("Enter the number of unknowns :");
scanf("%d",&n);
float arr[n][n+1];
printf("Enter the augmented matrix\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
    scanf("%f",&arr[i][j]);
}
diagonal(arr);
return 0;
}
