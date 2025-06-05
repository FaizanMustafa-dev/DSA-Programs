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
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }
    void inorder(node* root){
        if(root == NULL){
		return;
		}
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }
    void postorder(node* root){
        if (root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
int main(){
	
 node*root=NULL;
 
    root=insert(root,1);
    
	root=insert(root,3);
	root=insert(root,2);
    root=insert(root,3);
    root=insert(root,4);
    root=insert(root,-1);
    postorder(root);
	
	
	/*
	
       	1
      /  \
        3
   / \  / \
  4  5  2  7
  
	*/
	
	
	
	
	
	
	
	return 0;
}
