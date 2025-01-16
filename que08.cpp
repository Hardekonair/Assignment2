//8 Draw the pattern for n=5
/*
    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5 
*/

#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i = 1; i <= 2 * n - 1; i++) 
    {
        for (int j = 1; j <= 2 * n - 1; j++) 
        {
            int min = i;
            if (j < min) 
                min = j;
            if (2 * n - i < min) 
                min = 2 * n - i;
            if (2 * n - j < min) 
                min = 2 * n - j;
            printf("%d ", n - min + 1);
        }
        printf("\n");
    }
    return 0;
}