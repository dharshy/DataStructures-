//Implementation of a BST - Insertion and search operations
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
//A node consits of data,left and right pointer
struct BSTnode{
	int data;
     struct BSTnode *right;
     struct BSTnode *left;
};

typedef struct BSTnode BSTnode;

//Creating a new node function
int getnewnode(BSTnode **root , int data){

	BSTnode *tempnode = *root;
	if(tempnode == NULL){
		tempnode = (BSTnode*)malloc(sizeof(BSTnode));
		tempnode->data = data;
		tempnode->left = NULL;
		tempnode->right = NULL;
		*root = tempnode;
		return 0;
	}
//return root;
};

//Insertion using recursion
int insert(BSTnode **root, int data)
{
	BSTnode *tempnode = *root;
	/*we are not passing the tempnode into getnewnode -> *root contains the value at the address 
	and root contains the address of the root - since we are passing (&root) from main.
	here when we pass tempnode to create a new node we have to reassign it to root again, so we are passing root
	directly
	*/
	if(tempnode  == NULL){
		return getnewnode(root,data);
	}

	else if (data < tempnode-> data)
	{
		return  insert(&tempnode->left,data);
	}
	else if(data > tempnode ->data)
	{
		return  insert(&tempnode->right,data);
	}
//return root;
}

//Serach using recursion
//passing the 
bool search(BSTnode **root, int data)
{
	BSTnode *tempnode = *root;
	if (tempnode == NULL){
		//return false;
		puts("NOT FOUND");
	}
	else if(data == tempnode->data)
	{
		//return true;
		puts("FOUND");
	}
	else if(data < tempnode->data){
		search(&tempnode->left, data);
	}
	else if(data >tempnode->data){
		search(&tempnode->right,data);
	}
}

int main(){
	BSTnode* root = NULL;
	insert(&root,1);
	insert(&root,2);
	//check this logic again - if (a!=0) is AKA if(a)==True
	/*if(!search(&root,2)){
		puts("FOUND");}*/
	search(&root,2);
	}
	
