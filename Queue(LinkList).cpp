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
class Queue{
	node* front;
	node* back;
	public:
		Queue(){
			front=back=NULL;
		}
	  void enqueue(int x){
	  	node* n=new node(x);
		if(front==NULL){
			back=n;
			front=n;
			return;
		}
		
		back->next=n;
			back=n;
		}
		void dequeue(){
			if(front==NULL){
		     cout<<"Queue underflow occur!"<<endl;
				return;
			}
			node* todel=front;
			front=front->next;
			delete todel;
		}
		void peek(){
			if(front==NULL){
				cout<<"Queue is empty."<<endl;
			}
			else{
				cout<<"Peek value is : "<<front->data;
			}
		}
		void display(){
			if(front==NULL){
				cout<<"Queue is empty"<<endl;
				return;
			}
			node * temp=front;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;
		}
};
int main(){
	Queue q1;
	q1.enqueue(1);
	q1.display();
	q1.enqueue(2);
	q1.display();
	
	return 0;
}
