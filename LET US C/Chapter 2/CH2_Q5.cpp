/*   A number is input from user,Write a program to create a new number which will get when 1 is added to each of its digit   */
/* eg: input=12946,    O/P=25057 */



#include<stdio.h>
int main()
{
	int num, rem=0, new_num=0;
	printf("Enter a number \n");
	scanf("%d", &num); //1234
	
	while(num > 0)       // T T 
	{
		rem=num%10;      // 4 , 3
		 
		new_num=rem*10+(new_num + 1);
		//new_num=(new_num*10 ) + 1 +rem;  // 0+1+4=5  , 
		num=num/10;  //123
		printf("DDDDD");
	}
	
	printf("The required number is %d \n", new_num);
	
	return 0;
}// end if main




