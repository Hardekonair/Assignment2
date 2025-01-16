#include<stdio.h>
#include<stdlib.h>
int main(){

int n;
printf("Enter the value of n:");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++){
        printf("*");
    }
    for(int sp=1;sp<=2*(n-i);sp++)
    {
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
}
printf("\n");
}
for (int i=n-1;i>=1;i--)
{
    for(int j=1;j<=i;j++){
        printf("*");
    }
    for(int sp=1;sp<=2*(n-i);sp++)
    {
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
}
printf("\n");
}
return 0;
}