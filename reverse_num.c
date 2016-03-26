#include<stdio.h>
#include<stdlib.h>
int reverse_num(int *ptr);
int reverse_num(int *ptr)
{
	int num_ptr,temp;
	num_ptr = *ptr;
	while(num_ptr!= 0){
		temp = num_ptr%10;
		num_ptr = num_ptr/10;
	 	printf("%d",temp);
		
}
}
int main(){
  int num;
  int *ptr;
  printf("Enter the number to be reserved\n");
  scanf("%d",&num);
  ptr = &num;
  reverse_num(ptr);
 }
