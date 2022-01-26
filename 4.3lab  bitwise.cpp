//4.3 to demonstrate bitwise operators   (&, |, ^, ~, <<, >>)*/

#include<stdio.h>
int main(){
	int  a = 10, b = 15;  // integer represented by 4 bytes  i.e. 32 bits
	int x;
	x = a & b; // AND
	printf("\n x = %d", x);
		x = a |  b;   // OR
		printf("\n x = %d", x);    // 1010    1111
	x = a ^  b;     //odd function  its XOR
	printf("\n x = %d", x);
		x = ~a;
		printf("\n x = %d", x);
	x = a << 3;
	printf("\n x = %d", x);
		x = a >> 3;
		printf("\n x = %d", x);
	
	return 0;
}
