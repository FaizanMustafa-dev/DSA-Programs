#include<iostream>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
};
node* insert(node* root,int val){
	if(root==NULL){
		
		return new node(val);
	}
	if(root->data>=val){
		
		root->left=insert(root->left, val);
                 	}
else{
	root->right=insert(root->right,val);
}
return root;
}
void preorder(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	
}
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main(){
	struct node* root=new node(1);
	
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->right=new node(7);
	root->right->left=new node(6);	
//	root->right->right->right=new node(9);
//	root->right->right->left=new node(8);
cout<<"Pre-order : ";
	preorder(root);
	
cout<<endl<<endl;
		cout<<"inorder : ";
	inorder(root);
	
	cout<<endl<<endl;

	postorder(root);
	return 0;
}
/*
      1
    /   \
   2     3
  / \   / \
 4   5 6   7
 
*/

