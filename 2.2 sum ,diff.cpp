/* Program 2.2 to demonstrate arithmetic operators
+	:Add
-	:Subtract
*	:Multiply
%	:Remainder
/	:Divide
*/

#include<stdio.h>
int main(){
	int a, b, sum, diff, pro, div, rem;
	
	printf("\n    Enter two numbers: ");
	scanf("%d %d", &a, &b);
	sum = a+b;
	diff=a-b;
	pro=a*b;
	div=a/b;
	rem=a%b;
	
	printf("Sum = %d   \n  Difference=%d    \n  Product = %d    \n   Division = %d     \n remainder = %d", sum, diff, pro, div, rem);
	
	return 0;
}
