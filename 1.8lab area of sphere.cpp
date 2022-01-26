/* Lab sheet :1 
Program 8: Program to find area of sphere 
Lab date: 2076/02/03 */

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	float a, r;
	printf("Enter the radius of sphere: \t");
	scanf("%f", &r);
	a = 4*PI*pow(r, 2);
	
	printf("The area of sphere is: %f", a);
	return 0;
}
