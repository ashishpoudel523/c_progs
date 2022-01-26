/* Lab sheet :1 
Program 3: Program to find interest given P = 4000, T = 2, R = 5.5
Lab date: 2076/02/03 */

#include<stdio.h>
int main()
{
	float p,t,r,si;
	p = 4000;
	t = 2;
	r = 5.5;
	si = (p*t*r)/100;
	printf("The simple interest is: \n %.2f", si);
	return 0;
}
