//4.4  sizeof() operator:   it returns the number of bytes required for a variable. always value is integer, not float*/


#include<stdio.h>
int main(){
	int a; 
	printf("size of integer variable int a \t: %d bytes", sizeof(a));
	
	long b;
	printf("\nsize of variable long b \t: %d bytes", sizeof(b));
	
	short c;
	printf("\nsize of variable short c \t: %d bytes", sizeof(c));
	
	unsigned short d; //65536, unsigned: 0 to 65535, signed: -32768 to +32767
	printf("\nsize of unsigned short d \t: %d bytes", sizeof(d));
	
	float x;
	printf("\nsize of variable float x \t: %d bytes", sizeof(x));
	
	double z;
	printf("\nsize of variable double z \t: %d bytes", sizeof(z));
	
	long double w;
	printf("\nsize of variable long double w \t: %d bytes", sizeof(w));
	
	char p;
	printf("\nsize of variable char p \t: %d bytes", sizeof(p));
	
	char name[100]; //name string or character array
	printf("\nsize of character variable  \t: %d bytes", sizeof(name));
	
	int num[20]; // num is an integer array that can hold 20 numbers
	printf("\nsize of int variable \t: %d bytes", sizeof(num));
	
	return 0;
}
