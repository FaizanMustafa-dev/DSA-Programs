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
void insertAtHead(node* &head,int val){
	node* n=new node(val);

	n->next=head;
	head=n;
}

void insertAtTail(node* &head,int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->	next;
	}
	temp->next=n;
}
void deletion(node* &head,int val){
	node* temp=head;
	if(head->data==val){
		node* todel=head;
		head=head->next;
		delete todel;
		return;
	}
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* del=temp->next;

	temp->next=temp->next->next;
		delete del;
}
void sorting(node* &head){
	node* sort=head;
	if(head==NULL){
		return;
	}
	while(sort!=NULL){
		node* sort1=sort;
		while(sort1!=NULL){
			node* sort2=sort1->next;
			while(sort2!=NULL){
				if(sort1->data>sort2->data){
					int data=sort1->data;
					sort1->data=sort2->data;
					sort2->data=data;
				}
				sort2=sort2->next;
			}
			sort1=sort1->next;
		}
		
		sort=sort->next;
	}
}
void removeduplicate(node* &head){
	node* sort=head;
	if(head==NULL){
		return;
	}
	while(sort!=NULL){
		node* sort1=sort;
		while(sort1!=NULL){
			node* sort2=sort1->next;
			while(sort2!=NULL){
				if(sort1->data==sort2->data){
					//Perform remove duplicate here
				}
				sort2=sort2->next;
			}
			sort1=sort1->next;
		}
		
		sort=sort->next;
	}
}
void reverse(node* &head){
	
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	while(currptr!=NULL){
		nextptr=currptr->next;
		currptr->next=prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
		
		
	}
	head=prevptr;
}

void display(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	
}
int main(){
node* head=NULL;
insertAtHead(head,0);
insertAtTail(head,1);
insertAtTail(head,2);
insertAtTail(head,5);
insertAtHead(head,4);
sorting(head);

display(head);
reverse(head);
display(head);
	return 0;
}


