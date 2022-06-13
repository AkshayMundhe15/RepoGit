/*   A number is input from user,Write a program to create a new number which will get when 1 is added to each of its digit   */
/* eg: input=12946,    O/P=25057 */



/* #include<stdio.h>
int main()
{
	int num, rem=0, new_num=0;
	printf("Enter a number \n");
	scanf("%d", &num); //1234
	
	while(num > 0)       // T T 
	{
		rem=num%10;      // 4 , 3
		 
		new_num=(rem*10)+(new_num + 1); // 
		//new_num=(new_num*10 ) + 1 +rem;  // 0+1+4=5  , 
		num=num/10;  //123
	
	}
	
	printf("The required number is %d \n", new_num);       */
	
	
#include<stdio.h>

int main()
{
    int num, sum, i, number, count=0, n=1;

    printf("Enter N Digit's Number: ");//25057
    scanf("%d", &num); 

    number = num; //25057

    //get the counter till then we have to run the loop

    while(number!=0)
    {
        number = number/10; // 7 5 0 5 2
        count = count + 1; //1 2 3 4 5
    }

    for(i=1;i<count;i++)  //1
    {
        n = n * 10;  //n = 10 //10 110  1110 11110
        n = n + 1;   //n = 11  //11 111 1111 11111
    
    }

	  
	  sum = num + n;
      printf("Output: %d", sum);
	
}// end if main




