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
void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
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
int main(){
	
node*head=NULL;
insert(head,1);
insert(head,2);
display(head);
deletion(head,1);
display(head);
	return 0;
}

