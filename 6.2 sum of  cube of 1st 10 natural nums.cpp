//6.2 WAP to find the sum of cube of 1st 10 natural nums

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        sum = sum + i*i*i;   // sum = sum+i;
    }
    printf("Sum = %d",sum);
    return 0;
}
