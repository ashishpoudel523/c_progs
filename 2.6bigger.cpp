/* program to find bigger number among two numbers 8*/
#include<stdio.h>
int main(){
	float a, b;
	printf("Enter two numbers a   and b:     \t");
	scanf("%f %f", &a, &b);
	if(a>b){
		printf("  %.2f is bigger     \n", a);
	}
	else{
		printf(" %.2f is bigger    \n", b);
			}
		return 0;
}

