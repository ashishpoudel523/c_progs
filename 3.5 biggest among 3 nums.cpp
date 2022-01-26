//3.5  program to  demonstrate logical operator [to find largest among 3 nums]

#include<stdio.h> // input output
int main(){
	float a, b, c;
	
	printf("\n Enter three numbers: \t");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a>b && a>c)  //relational operators
	{
		printf("%f is the biggest.",a);
	}
	else if(b>a && b>c)
	{
		printf("%f is the biggest.",b);
	}
	else{
		printf("%f is the biggest", c);
	}
	
	return 0;
}
