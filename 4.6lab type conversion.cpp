/*  4.6 type conversion: converting one data type into another data type:
1. Implicit type conversion: type conversion:
	char -> int,
	int -> long int,
	long -> float,
	float -> double
2. Explicit conversion */

#include<stdio.h>
main(){
	int a = 10;
	float x;
	x = a;
	printf("\nx = %f", x);
	
	float y  = 10.532;
	int b;
	b = y;
	printf("\nb = %d", b);
	
	int l = 10, h = 6;
	float area;
	area = (float)1/2* l*h;  //explicit type conversion or type casting
	printf("\nArea = %f", area);
	
/*   
1. precedence: priority order in computation of an operator
2. Associativity: left , right
*/	
}




