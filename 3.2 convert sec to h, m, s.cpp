//program 3.2  to convert seconds to hour, miuntes and seconds

#include<stdio.h>
int main(){
	int n, h, m, s;
	printf("Enter seconds:  \t");
	scanf("%d", &n);
	
	h = n/3600;
	
	m = h/60;
	
	s = (n%3600)%60;
	
	printf("\n Hours = %d  \n  minutes = %d   \n seconds = %d", h, m, s);
	
	return 0;
}
