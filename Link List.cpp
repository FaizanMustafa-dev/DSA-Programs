#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int val){
		
		data=val;
		next=NULL;
		}
};
void insert(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}
void insert_head(node* &head,int val){
	node* n=new node(val);
	n->next=head;
	head=n;
	
}
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
}
bool search(node* head,int key){
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			return true;
		}
	
		temp=temp->next;
	}
	return false;
}
void deletion(node* &head,int val){
	node* temp=head;
	
	  if (head->data == val) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
	
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* del=temp->next;
	temp->next=temp->next->next;
	delete del;
}
node* reverse(node* &head){
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	while(currptr!=NULL){
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
	}
	return prevptr;
}
int main(){
	node* head=NULL;
	int choice;
	cout<<"------Link List------"<<endl;
	cout<<" 1-Insert "<<endl;
	cout<<" 2-Deletion"<<endl;
	cout<<" 3-Show value of node from head to tail"<<endl;
	cout<<" 4-Search and elemnt"<<endl;
	cout<<" For exit press -1"<<endl;
	again:
		cout<<endl<<"Enter your choice : ";
		cin>>choice;
		while(choice!=-1){
		
	switch(choice){
		case 1:{
			int input;
				cout<<"Enter the value to add in link list : ";
				cin>>input;
				int choic;
				cout<<"Insert at head or tail...for tail press 1 and for head press 2 : ";
				againchoic:
				cin>>choic;
				if(choic==1){

				insert(head,input);
				cout<<"Succesfully inserted!"<<endl;
			}
			else if(choic==2){
				insert_head(head,input);
				cout<<"Succesfully inserted!"<<endl;
			}
			else{
				cout<<"Only press 1 or 2!"<<endl;
				goto againchoic;
			}
				goto again;
			break;
		}
		case 2:{
			int del;
			cout<<"Enter value to delete in Link list : ";
			cin>>del;
		if(head!=NULL){
			
		if(search(head,del)){
		
			
				deletion(head,del);
					cout<<"The node of given value is deleted successfully!"<<endl;
				}
				else{
					cout<<"Value not found in nodes of Link list"<<endl;
				}
			}
			else{
				
			
				cout<<"The node is empty so nothing to delete"<<endl;
	}
			goto again;
			break;
		}
		case 3:{
		if(head!=NULL){
			display(head);
		}
		else{
			cout<<"The link list is empty";
		}
			goto again;
			break;
		}
		case 4:{
				int input;
			cout<<"Enter value to search : ";
			cin>>input;
			if(search(head,input)){
				
				cout<<"Value found"<<endl;
			}
			else{
				cout<<"Value not found"<<endl;
			}
			goto again;
			break;
		}
		default:{
			cout<<"You enter wrong choice!"<<endl;
			goto again;
			break;
		}
	}
}

	return 0;
}













