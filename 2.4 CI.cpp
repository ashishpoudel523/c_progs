/*to find compound interest */

#include<stdio.h>
#include<math.h>
int main(){
	float p, ci, r, t;
	printf("Enter p, r, t:   \t");
	scanf("%f %f %f", &p, &r, &t);
	ci = p*pow((1+r/100), t);
	
	printf("The CI is:  %f", ci);
	
	return 0;
}
