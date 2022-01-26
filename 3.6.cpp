//enter the marks in 2 subs .... calculate if he is pass or fail

#include<stdio.h>
int main()
	{
		int m1, m2;
		printf("Enter marks in 2 subjects:  \t");
		scanf("%f", &m1, &m2);
		
		if(m1>40 && m2>40)
			{
				printf("He is pass.");
			}
		else
		{
		printf("Fail");
		}
		
		return 0;
	}
