#include<stdio.h>
#include<stdlib.h>

//function that is to sort the given array
int insert_sort(int *array,int size );
int insert_sort(int *array,int size)
{
	int i,j,temp;
	for(i=1;i<size;i++){
	 temp = array[i];
	 j= i-1;
	 while(array[j] > temp && j >= 0)
	 {
	   //a[i] = a[j] - first swap-after this both a[i] and a[j] has the same value
           array[j+1] = array[j];
	   //comparing all other values till this swap 
	   j--;
	 }
        //second swap - to change the value of a[j]
	array[j+1] = temp;
	}
}




int main(){
	int i;
	int arr[] = {1,2,3,15,4,9,5,0,12,10};
	insert_sort(arr,10);
	for(i=0;i<10;i++)
	{
	  printf("\t%d\n",arr[i]);
	}	
}
	

