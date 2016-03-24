#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int *num)
{
	int i,count=0;
	if ((*num)==1){
	 printf("This is Invalid Input");
	 return;
	}
 	for(i=2; i<=(*num)/2; i++)
	{
		if((*num) % i  == 0)
		{
		  count ++;
		  printf("%d",count);
		}
	}
	if (count == 0)
	{
	 printf("This is a prime number");
	}
	else{
	 printf("Not a prime number");
	}
	return 0;
}
int main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	prime(&num);
}
