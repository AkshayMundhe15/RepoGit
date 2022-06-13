//  number is input, program to find sum its digit  
// DAte : 31.05.2022

#include<stdio.h>

int main(){
	int num, que, sum=0, rem=999;
	printf("Enter a number \n");
	scanf("%d",&num);
	
	
	while(num !=0)
	{ 
			rem=num%10;         // this will work for ANY digits number
			sum=sum+rem;
			num=num/10;
		
	}
	printf("Sum of digits is %d ",sum);
}// end of main
