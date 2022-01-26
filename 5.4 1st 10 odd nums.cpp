//5.4  to find 1st 10 odd nums
#include<stdio.h>
#include<conio.h>
int main()
{       
int i,n,t=0,sum=0;
printf("First 10 even number is:\n");
for (i=1;i<=10;i++)
{      
 t+=2;
printf("%d \t",t);
sum +=t;   
}
printf("\n\nThe sum = %d\n",sum);
return 0;
}
