#include<stdio.h>
int main(){
	int a[10]={1, 5, 10, 4, 5, 6, 8, 12, 15,20};
	FILE *fp;
	fp = fopen("ashish.txt","wb");
	
	fread(a, sizeof(int), 10, fp);
	for(int i=0;i<10;i++){
		printf("\n %d", a[i]);
	}
	
	fclose(fp);
	return 0;
	
	
}
