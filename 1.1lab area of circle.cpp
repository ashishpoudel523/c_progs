/* Lab sheet :1.     
 c is free form i.e. all program can be written imn the same line
Program 1: Program to calculate area of a circle having its radius =5 .
Lab date: 2076/02/03 */

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	float r,a;
	r = 5.0;
	a = PI*pow(r,2);
	printf("The area of circle is: \n %.2f", a);
	return 0;
}
