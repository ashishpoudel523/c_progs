/* Lab sheet :1 
Program 7: Program to find roots of quadratic equation ax^2+bx+c=0
Lab date: 2076/02/03 */

#include<stdio.h>
#include<math.h>
main()
{
	float a, b, c, x1, x2;
	printf("Enter the values of a, b, c\n ");
	scanf("%f %f %f", &a, &b, &b);
	
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	
	printf("\nThe value of x1 root is: %f   \nThe value of x2 root is: %f" , x1, x2);
}
