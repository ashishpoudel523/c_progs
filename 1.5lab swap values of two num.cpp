/* Lab sheet :1 
Program 5: Program to swap values of two intege variables
Lab date: 2076/02/03 */

#include<stdio.h>
main()
{
	int a=10, b=20, temp;
	
	printf("Before swap");
	printf("\n a = %d    \t  b= %d", a, b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\n After swap");
	printf("\n a = %d    \t  b = %d", a, b);
}
