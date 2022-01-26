/* Lab sheet :1 
Program 6: Program to  calculate area and circumference of a circle using symbolioc constant
Lab date: 2076/02/03 */

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	float r, c, a;
	printf("Enter radius of circle:  \t");
	scanf("%f", &r);
	a = PI*pow(r,2.0);
	c = 2*PI*r;
	
	printf("The area of circle is : %.2f \t", "The circumference of circle is :  %.2f \t", a, c);
	return 0; 
}
