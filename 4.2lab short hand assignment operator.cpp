//4.2 program to demonstrate short hand assignment operators: +=,-=, *=, /=, %=    */
#include<stdio.h>
int main(){
	int a;
	printf("\n Enter number: ");
	scanf("%d",&a);
	a+= 5;
	printf("\n a = %d", a);
	
	a *=2;
	printf("\n a = %d", a);
	
	a -=2;
	printf("\n a = %d", a);
	
	a /=2; //a =  a/2
	printf("\n a = %d", a);
	
	a %=2;
	printf("\n a = %d", a);
	
	return 0;
	}
