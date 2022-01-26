#include<stdio.h>
struct student{
	int rollno;
	char name[30];
	char address[20];
	float gpa;
};
int main(){
	struct student s;
	FILE *fp;
	fp = fopen("student.doc", "wb");
	printf("\n Enter rollno, name, address and GPA: \n");
	scanf("%d %s %s %f",&s.rollno, s.name, s.address, &s.gpa);
	
	fread(&s,sizeof(s),1,fp);
	printf("\n %d \t%s \t%s \t%d",s.rollno, s.name, s.address, s.gpa );
	fclose(fp);
	return 0;
}
