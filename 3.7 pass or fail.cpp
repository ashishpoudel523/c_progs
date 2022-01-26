//    enter marks in 5 subjects  ....... find out first, second, third division or fail 
#include<stdio.h>
int main(){
	float m1, m2, m3, m4, m5, p;
	printf("Enter marks in five subjects: \t");
	scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
	
	if(m1>=100, m2>=100, m3>=100, m4>=100, m5>=100)
	{
		printf("Invalid marks");
	}
	if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40){
		p = (m1+m2+m3+m4+m5)/5;
		
	}
	 if(p>=80){
	 	printf("Distinction");
	 }
	 else if(p>=70){
	 	printf("1st Division");
	 }
	 else if(p>=60){
	 	printf("2nd Division");
	 }
	 else if(p>=40){
	 	printf("3rd Division");
	 }
	 else
	 {
	 	printf("Fail");
	 }
	return 0;
}
