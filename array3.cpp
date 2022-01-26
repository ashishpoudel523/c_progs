// matrix represenation
#include<stdio.h>
int main(){
	int a[3][3]; // two dimensional array
	int i, j;
	
	printf("\n Enter a 3*3 matrix \t");
	for(i=0;i<3;i++)  //i represents row
	{
		for(j=0;j<3;j++) //j is column
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The matrix is: \n");
	for(i=0;i<3;i++)  
	{
		for(j=0;j<3;j++) 
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
