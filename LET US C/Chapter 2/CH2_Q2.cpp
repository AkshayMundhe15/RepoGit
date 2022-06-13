// A number is an input from user, program to reverse the number
// Date : 31.05.2022

#include<stdio.h>
int main()
{
	int num, rev_num=0, rem;
	printf("Enter a number :  \n");
	scanf("%d",&num);
	
	while(num > 0)    
	{
		rem=num%10;  
		rev_num=(rev_num*10 ) + rem ;    
		num=num/10;  
		 
	}// end of while loop	
	
	printf("Reveresed Number is  %d ", rev_num);
}// end of main


/*  Enter a number :
123456789
Reveresed Number is  987654321
--------------------------------
Process exited after 5.431 seconds with return value 0
Press any key to continue . . .    */
