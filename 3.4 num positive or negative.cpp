// 3.4   to check whether a number is positive or negative

#include<stdio.h>
main(){
	int a;
	printf ("Enter a number:  \t");
	scanf("%d", &a);
	if(a>0){
		printf("The numbrer is positive.");
	}
	else if(a<0)
	{
		printf("The number is negative.");
	}
	else 
	{
		printf("The number is zero.");
	}
	
	
}
