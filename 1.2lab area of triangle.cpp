/* Lab sheet :1 .
Program 2: Program to calculate area of a triangle having its base = 4 cm and height = 5cm.
Lab date: 2076/02/03 */

#include<stdio.h>
int main()
{
	float b,h, a;
	b = 4;
	h = 5;
	a = (b*h)/2;
	printf("The area of triangle is: \n %.2f", a);
	return 0;
}
