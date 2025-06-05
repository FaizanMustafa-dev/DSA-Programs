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
	if(val<root->data){
		root->left=insert(root->left,val);
	}
	else{
		root->right=insert(root->right,val);
	}
	return root;
    
}
node* findchild(node* temp){
	struct node* child;
	if(temp->left==NULL && temp->right==NULL){
		child=NULL;
		return child;
	}
	else if(temp->left!=NULL){
		child=temp->left;
		return child;
	}
	else{
		child=temp->right;
		return child;
	}
	
}
void deletenode(node* &root,int key){
	node* temp=root;
	node* par=NULL;
	while(temp!=NULL){
		if(key<temp->data){
			par=temp;
			temp=temp->left;
		}
		else if(key>temp->data){
			par=temp;
			temp=temp->right;
		}
		else{
			 node* child=findchild(temp);
			if(par!=NULL){

				if(par->left->data==key){
					
					par->left=child;
				}
				else{
					par->right=child;
				}
			}
			else{
				root=child;
			}
			delete temp;
			return;
		}
	}

	
}
bool search(node* root,int val){
	if(root==NULL){
		return false;
	}

    else if(root->data==val){
		return true;
	}
   else	if(val<root->data){
		return search(root->left,val);
	}
	else{
		return search(root->right,val);
	}
	return false;
	
}
/*  
        11
      /   \
     2     20
      \    
      6 
	 /
	3     

*/
void preorder(node* root){
        if(root==NULL){
		return;
		}
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
   
    void inorder(node* root){
        if(root == NULL){
		return;
		}
        inorder(root->left);
        cout<<root->data<<" ";
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
	
cout<< "---------------------------"<<endl;
cout<< "|      Tree Menu          |"<<endl;
cout<< "|-------------------------|"<<endl;
cout<< "|  1 - Insert a Value     | "<<endl;
cout<< "|  2 - Pre-order Traversal|"<<endl;
cout<< "|  3 - In-order Traversal |"<<endl;
cout<< "|  4 - Postorder Traversal|"<<endl;
cout<< "|  5 - Search a value     |"<<endl;
cout<< "|  6 - Delete a value     |"<<endl;
cout<< "| -1 - Exit               |"<<endl;
cout<< "---------------------------"<<endl;

 int choice;
 do{
 	
 cout<<"Enter your choice : ";
 cin>>choice;
 switch(choice){
 	case 1:{
 		int a;
 		cout<<"Enter how many numbers you want to insert:  ";
 			cin>>a;
 			if(a>0){	
 			int arr[a];
 			for(int i=0;i<a;i++){
		 	cout<<"Enter "<<i+1<<" value : ";
		 	cin>>arr[i];
		 	root=insert(root,arr[i]);
		 }
 		}
 		else{
 			cout<<"You can add minimum 1 value!"<<endl;
		 }
		break;
	 }
	 case 2:{
	 	if(root!=NULL){
	 		
		 
	 	preorder(root);
	 }
	 else{
	 	cout<<"Tree is empty"<<endl;
	 }
		break;
	 }
	 case 3:{
	 	if(root!=NULL){
	 	inorder(root);
	 }
	 else{
	 	cout<<"Tree is empty"<<endl;
	 }
	 	
		break;
	 }
	 case 4 :{
	if(root!=NULL){
	 postorder(root);
	 }
	 else{
	 	cout<<"Tree is empty"<<endl;
	 }
	 
	 	
		break;
	 }
	 case 5:{
	 	int num;
	 	cout<<"Enter a number to search : ";
	 	cin>>num;
	 	if(search(root,num)){
     	cout<<"value found!"<<endl;
     	
	 }
	 else{
	 	cout<<"Value not found!"<<endl;
	 }
		break;
	 }
	 case 6:{
	 		int num;
	 	cout<<"Enter a number to delete : ";
	 	cin>>num;
	 	if(search(root,num)){
     	
     	deletenode(root,num);
     	cout<<"Number deleted!"<<endl;
	 }
	 else{
	 	cout<<"Value not found!"<<endl;
	 }
		break;
	 }
 }
}
while(choice!=-1);
 	
/*
        10
      /   \
     4     15
   /  \   / \
  3    5 12   16
*/
	
	return 0;
}
