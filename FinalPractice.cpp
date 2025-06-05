#include<iostream>
#include<queue>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	public:
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
	else if(val<root->data){
		root->left=insert(root->left,val);
	}
	else{
		root->right=insert(root->right,val);
	}
	return root;
}
void pre_order(node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	pre_order(root->left);
	pre_order(root->right);
	
}
void in_order(node* root){
	if(root==NULL){
		return;
	}
	
	in_order(root->left);
	cout<<root->data<<" ";
	in_order(root->right);
	
}
void post_order(node* root){
	if(root==NULL){
		return;
	}
	
	post_order(root->left);
	post_order(root->right);
	cout<<root->data<<" ";
	
}
bool search(node* root,int val){
	if(root==NULL){
		return false;
	}
	else if(root->data==val){
		return true;
	}
	else if(val<root->data){
		return search(root->left,val);
	}
	else{
		return search(root->right,val);
	}
	return false;
}

node* maxvalue(node* root){
	node* temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	return temp;
}

node* minvalue(node* root){
	node* temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}
/*
            20
           /  \
         |10|  30
        /   \    \
      5      15   35
	 / \    /  \    \
	1	8  12   16   40

*/
node* deletion(node* root,int val){
	
	if(val<root->data){
		root->left=deletion(root->left,val);
	}
	else if(val>root->data){
		root->right=deletion(root->right,val);
	}
	else{
		if(root->left==NULL){
			node* temp=root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL){
			node* temp=root->left;
			delete root;
			return temp;
		}
		node* temp=minvalue(root->right);
		root->data=temp->data;
		root->right=deletion(root->right,temp->data);
		
	}
	return root;
}
int main(){

	struct node* root=NULL;
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,30);
	root=insert(root,5);
	root=insert(root,15);
	root=insert(root,35);
	root=insert(root,1);
	root=insert(root,8);
	root=insert(root,12);
	root=insert(root,16);
	root=insert(root,40);
	

//	root=deletion(root,10);
	
	
	cout<<endl<<"preorder : ";
	pre_order(root);
	cout<<endl<<endl<<"inorder : ";
	in_order(root);
	cout<<endl<<endl;
	node* min=minvalue(root);
	node* max=maxvalue(root);
	
	cout<<endl<<"Minumum : "<<min->data;
	cout<<endl<<"Maximum : "<<max->data;
/*
            20
           /  \
         |10|  30
        /   \    \
      5      15   35
	 / \    /  \    \
	1	8  12   16   40
	
	After deletion
	        20
           /  \
          12   30
        /   \    \
      5      15   35
	 / \       \    \
	1	8       16   40
	

*/
	
	return 0;
}
