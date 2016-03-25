#include<stdio.h>
#include<stdlib.h>
//to determine if given  num is amstrong
//sum of individual cubes of digits in the number
//should be equal to the number 153 = 1^3 + 5^3 + 3^3
int amstrong(int input_num);
int amstrong(int input_num){
   	int temp;
	int num = input_num;
	int sum=0; 
	while(num!= 0)
	{
	//This will give the last digit
	temp = num%10;
	//This will give the remaining number 
	num = num/10;
	//This will calculate and give the sum of the digits
	sum = sum +(temp*temp*temp);
	}
	if(sum == input_num)
	{
	printf("This is an amstrong number %d\n",input_num);
	}
	else{
	printf("This is not an armstrong number\n");
	}


}



int main()
{
    int input_num; 
    printf("Enter the number");
    scanf("%d",&input_num);
    amstrong(input_num);
}
