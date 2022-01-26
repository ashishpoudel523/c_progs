/*Program to find distance between two points    ,,,,,  d=sqrt*(x2-x1)^2=(y2-y1)^2     */

#include<stdio.h>
#include<math.h>
int main(){
	float d, x1, x2, y1, y2;
	printf("\n  Enter value of x2, x1, y2, y1:     \t");
	scanf("%f %f %f %f", &x2, &x1, &y2, &y1);
	d =sqrt(pow(x2-x1,2))+(pow(y2-y1,2));
	printf("Distance is:  %f \n",d);
	return 0;
}
