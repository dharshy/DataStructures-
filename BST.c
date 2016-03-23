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
BSTnode* getnewnode(BSTnode *root , int data){

	if(root == NULL){
		root = (BSTnode*)malloc(sizeof(BSTnode));
		root->data = data;
		root->left = NULL;
		root ->right = NULL;
	}
return root;
};

//Insertion using recursion
BSTnode* insert(BSTnode *root, int data)
{
	if(root == NULL){
		root = getnewnode(root,data);
	}

	else if (data < root-> data)
	{
		root->left = insert(root->left,data);
	}
	else if(data > root ->data)
	{
		root->right = insert(root->right,data);
	}
return root;
}

//Serach using recursion
bool search(BSTnode*root, int data)
{
	if (root == NULL){
		return true;
		//puts("NOT FOUND");
	}
	else if(data == root->data)
	{
		return false;
		//puts("FOUND");
	}
	else if(data < root->data){
		search(root->left, data);
	}
	else if(data >root->data){
		search(root->right,data);
	}
}

int main(){
	BSTnode* root;
	root = insert(root,1);
	root = insert(root,2);
	if(!search(root,2)){
		puts("FOUND");
	}
	
}
