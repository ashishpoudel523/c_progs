/*lab sheet no: 6  (2076-04-03)
Objective: To implement different types of looping problems.
Problems: 1. Write a program to generate 1st n odd numbers.
		2. WAP to find sum of cube of first 10 natural numbers.
		3. 
		
		
		
		
1)to find 1st n odd nums  
*/

#include <stdio.h>
int main()
{
    int i, n;
    printf("Print odd numbers till: ");
    scanf("%d", &n);

    printf("All odd numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

