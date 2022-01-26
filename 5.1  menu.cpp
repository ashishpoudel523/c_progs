/*5.1  2076-03-13
1.Write a menu based program to perform calculatiions according to following choice:
+
-
*
/
%
$ for exponentiation
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	char ch;
	while(1)
	{
	system("cls");
	printf("MENU\n");
	printf("Enter two nums: \t");
	scanf("%d %d", &a, &b);
	fflush(stdin);
	printf("\nPress + to sum \nPress - to difference \nPress * to multiply \nPress / to divide \nPress %% for remainder \nPress $ for exponential");
	scanf("%c", &ch);

	switch(ch){
		case '+':
			c=a+b;
			printf("\n sum = %d", c);
			break;
		case '-':
			c=a-b;
			printf("\n diff = %d", c);
			break;
		case '*':
			c=a*b;
			printf("\n multiply = %d", c);
			break;
		case '/':
			c=a/b;
			printf("\n divide = %d", c);
			break;
		case '%': 
			c=a%b;
			printf("\n rem = %d", c);
			break;
		case '$': 
			c=pow(a,b);
			printf("\n expo = %d", c);
			break;
		case '7':
			exit(1);
		default:
			printf("\n Invalid");
	}
	system("pause");
	getch();
}
	return 0;
	
}
