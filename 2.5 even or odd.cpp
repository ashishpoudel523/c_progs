/*program to check whether a number is odd or even  */


#include<stdio.h>
int main(){
	int a, rem;
	printf("Enter a number:    \t");
	scanf("%d", &a);
	rem=a%2;
	if(rem==0){
		printf("The number is even.   \n");
	}
	else{
		printf("The number is odd.   \n");
	}
	return 0;
}
