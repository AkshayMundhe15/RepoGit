// input a number from usr, sum of 1st and last digit
//31.05.2022

#include<stdio.h>
int main()
{
	int num, rem,que,  first, last, sum=0;
	printf("Enter a number: \n");
	scanf("%d",&num);
	
	last=num%10;
	while(num > 0)
	{
		rem=num%10;
		que=num/10;
		if(que==0)
			first=num;         
		num=que;		
	}
	sum=first + last;
	printf("The sum of first and last digit of given number is %d",sum);
	
}// end of main
