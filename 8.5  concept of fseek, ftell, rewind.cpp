/*Random Access to files
To read and write randomly to a file, we use following three functions:
i. fseek()
ii.rewind()
iii. ftell()

i.fseek(): This fumction is used to move the pointer to the desired position.
Syntax:
fseek(fp, offset, position);

where fp = file pointer
	offset = nimber of bytes to move
	position = 0 or 1 or 2
	0 = from beginning of the file
	1 = from current position
	2 = from ewnd of theg file
	
	Eg.: 
	fseek(fp, 20, 0);
	fseek(fp, 40, 1);
	fssek(fp, 100, 2);
	
ii.ftell(): tHIS FUNCTION TELLLS THE position of the file position from the beginning.
Syntax:  long int var = ftell(fp);

Example: n = ftell(f1);


iii. rewind(): This function postions the file pointer to the beginning of the file.
Syntax: rewind(fp);
*/
#include<stdio.h>

int main(){
	FILE *fp;
	int a[100];
	fp=fopen("ashish.txt", "r");
	printf("\n Position of the file pointer: %ld", ftell(fp));
	fread(a,sizeof(int),4,fp);
	
	printf("\n Position of the file pointer: %ld", ftell(fp));
	rewind(fp);
	
	printf("\n Position of the file pointer: %ld", ftell(fp));
	fread(a,sizeof(int),4,fp);
	
	printf("\n Position of the file pointer: %ld", ftell(fp));
	fseek(fp,500, 1);
	
	fclose(fp);
	return 0;
}
