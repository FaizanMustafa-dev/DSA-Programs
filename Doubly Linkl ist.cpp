#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node* prev;
	node(int val){
		data=val;
		next=NULL;
		prev=NULL;
	}
};
void insertatHead(node* &head,int val){
	node* n=new node(val);
	n->next=head;
	if(head!=NULL){
		head->prev=n;
	}
	head=n;
	
}
void insertatTail(node* &head,int val){
	if(head==NULL){
		insertatHead(head,val);
		return;
	}
	node* n=new node(val);
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}

void display(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ->";
		temp=temp->next;
	}
	cout<<"NULL";
}
int main(){
	node* head=NULL;
	insertatTail(head,1);
	insertatHead(head,0);
		insertatTail(head,2);
		display(head);
	return 0;
}
