//program to convert days in to year, mon, days


#include<stdio.h>
int main(){
	int n, y, m, d;
	printf("Enter the number of days:   \t");
	scanf("%d", &n);
	
	y = n/365;
	
	m = (n%365)/30;
	
	d=(n%365)%30;
	
	printf("\n years =%d,  \n months = %d,  \n days =%d", y, m, d);
	
	return 0;
}
