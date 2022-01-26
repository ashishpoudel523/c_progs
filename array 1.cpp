/*1. wap to read 'n' numbers and display the numbers their sum and average
2. wap to initialize 10 numbers in an array and display them
3. wap to find largest and smallest number from set of 


*/


//Q.No.1

#include<stdio.h>
int main(){
	int a[7]={3, 4, 5, 12, 56, 45, 23};
	int i, sum=0, avg;
	printf("\n Numbers are as follows: \t");
	
	for(i=0;i<7;i++){
		printf("\n %d",a[i]);
	}
	for(i=0;i<7;i++){
		sum+=a[i];
	}
	printf("The sum is: \t", sum);
	avg =(sum/7);
	printf("The average is: \t", avg);
	return 0;
}

