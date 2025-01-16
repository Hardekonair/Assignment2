#include<stdio.h>
#include<stdlib.h>
int main(){

int n;
printf("Enter the value of n:");
scanf("%d",&n);
for (int i=1;i<=n;i++)
{
    for(int j=0;j<i;j++)
    {
        printf("%c",'A'+j);
    }
    for(int sp=1;sp<=2*(n-i);sp++)
    {
        printf(" ");
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",'A'+j);
    }
printf("\n");
}
return 0;
}