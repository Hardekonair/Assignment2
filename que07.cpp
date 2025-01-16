#include<stdio.h>
#include<stdlib.h>
int main(){

int n;
printf("Enter the value of n:");
scanf("%d",&n);
for(int t=0;t<n;t++)
{
    for(int i=0;i<n;i++)
    {
        for(int sp=0;sp<n*t;sp++)
            printf(" ");
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
return 0;
}