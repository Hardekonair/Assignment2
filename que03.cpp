#include<stdio.h>
#include<stdlib.h>
int main(){

int n;
printf("Enter the value of n:");
scanf("%d",&n);
for (int i=0;i<n;i++)
{
    for(int sp=1;sp<=i;sp++)
    {
        printf(" ");
    }
    for(int j=0;j<2*(n-i)-1;j++){
        printf("%c",'A'+j );
    }
    printf("\n");
}
for(int i=n-1;i>0;i--){
    for(int sp=i-1;sp>=1;sp--)
    {
        printf(" ");
    }
    for(int j=0;j<=2*(n-i);j++){
        printf("%c",'A'+j );
    }
    printf("\n");
}

return 0;
}
