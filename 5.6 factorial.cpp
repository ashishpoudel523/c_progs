//5.6 to find factorial of a nimver
#include<stdio.h>
int main(){
	int f=1, n, i; 
	printf("Enter the number: \t");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		f=f*i;
	}
	printf("%d! = %d \n", n, f);
}
