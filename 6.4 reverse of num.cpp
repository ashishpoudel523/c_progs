//6.4 to find reverse of a number
#include<stdio.h>
int main(){
long long	int n, rev = 0;
	printf("Enter a number:     \t");
	scanf("%lld", &n); //lld is format specifier for long long 
	while(n!=0)
		{
			rev = rev*10;
			rev= rev+n%10;
			n = n/10;
		}
		printf("Reverse of the number = %lld  \n", rev);
		
		return 0;
}
