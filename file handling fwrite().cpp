/*fread() and fwrite() functions to read and write to a binary file
Data File: 
Text file: data is stored as a character sequence.
Binary File: Data is not stored as character sequence.
But data is stored as a block of bytes.
Examples:
Image, text,video etc. are bim\nary data files
*/

#include<stdio.h>
int main(){
	int a[10]={1, 5, 10, 4, 5, 6, 8, 12, 15,20};
	FILE *fp;
	fp = fopen("ashish.txt","wb");
	
	fwrite(a, sizeof(int), 10, fp);
	
	fclose(fp);
	return 0;
	
	
}
