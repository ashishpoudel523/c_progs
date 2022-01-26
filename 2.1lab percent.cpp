/* program to find percentage score of a student providing marks in 5 subjects.
*/
#include<stdio.h>

int main(){
	float m, s, a, c, n, p;
	printf("Enter marks in Maths, Science, Account, Computer and Nepali: \n" );
	scanf("%f %f %f %f %f", &m, &s, &a, &c, &n);
	p = (m+s+a+c+n+p)/5;
	printf("The percent = %f", p);
	return 0;
}
