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
    /*
    
       
    */
int main(){
	start:
		node*root=NULL;
		int a;
		
 		cout<<"Enter how many nodes you want to create :  ";
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
			cout<<"Enter greater then One value!"<<endl;
			goto start;
		}
		
cout<<"---------------------------"<<endl;
cout<<"    Student Information    "<<endl;
cout<<"---------------------------"<<endl;
cout<<"    Name : Faizan Mustafa"<< endl;
cout<<"    Regno : FA22-BCS-027"<<  endl;
cout<<"---------------------------"<<endl;
cout<<endl<<endl<<endl;
cout<< "---------------------------"<<endl;
cout<< "       Tree Menu           "<<endl;
cout<< "---------------------------"<<endl;
cout<< "   1 - Pre-order Traversal "<<endl;
cout<< "   2 - In-order Traversal  "<<endl;
cout<< "   3 - Postorder Traversal "<<endl;
cout<< "  -1 - Exit                "<<endl;
cout<< "---------------------------"<<endl;

 int choice;
 do{
cout<<
 cout<<"Enter your choice : ";
 cin>>choice;
 switch(choice){
 	case 1:{
 		if(root!=NULL){
	 		
		 
	 	preorder(root);
	 }
		break;
	 }
	 case 2:{
	 	if(root!=NULL){
	 		
		 
	 inorder(root);
	 }
	 else{
	 	cout<<"Tree is empty"<<endl;
	 }
		break;
	 }
	 case 3:{
	  postorder(root);
	 	
		break;
	 }
	 default:{
	 	cout<<"You entered wrong choice!"<<endl;
		break;
	 }

	 
 }
}
while(choice!=-1);
 	
	return 0;
}
