//to print max and  minimum nums in given numbers
#include<stdio.h>
int main(){
	int a[i];
	int max=0, min,  i;
	printf("\n Enter 10 numbers: \t");
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
	max = a[0];
	for (i=1; i<10; i++){
		if(a[i]>max)
		max = a[i];
	
	}
	printf("\n Max= %d",max);
	}
	return 0;
}
