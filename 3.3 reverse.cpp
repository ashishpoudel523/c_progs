// program to reverse a given number    2076/02/17

#include<stdio.h>
int main(){
	int n, rev = 0;
	printf("Enter a number:     \t");
	scanf("%d", &n);
	while(n!=0)
		{
			rev = rev*10;
			rev= rev+n%10;
			n = n/10;
		}
		printf("Reverse of the number = %d  \n", rev);
		
		return 0;
}
