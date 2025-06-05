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
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"-> NULL"<<endl;
}
void insertathead(node* &head,int val){
	node* n=new node(val);
	n->next=head;
	head=n;
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
void insertInSortedOrder(node* &head, int val) {
    node* newNode = new node(val);

    if (head == NULL || val <= head->data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* current = head;
    while (current->next != NULL && current->next->data < val) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}
void sort(node* &head){
	  if (head == NULL) {
        cout << "List is empty. Nothing to sort." << endl;
        return;
    }
     node* sort = head;
    
    while (sort != NULL) {
        node* sort1 = sort;
        while (sort1 != NULL) {
            node* sort2 = sort1->next;
            while (sort2 != NULL) {
                if (sort1->data > sort2->data) {
                    int data = sort1->data;
                    sort1->data = sort2->data;
                    sort2->data = data;
                    
                }
                sort2 = sort2->next;
            }
            sort1 = sort1->next;
        }
        sort = sort->next;
    }

}
bool search(node* &head,int val){
	
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==val){
			return true;
		}
		temp=temp->next;
	}
return false;
}
int main(){
	
	cout<<endl<<endl;
	
	node* head=NULL;
	insert(head,3);
	insert(head,5);
	insert(head,8);
	insert(head,10);
	insertInSortedOrder(head,4 );
	display(head);
	head=reverse(head);
	display(head);
	sort(head);
	display(head);
	int val;
cout<<"Enter value to search : ";

cin>>val;
if(search(head,val)){
	cout<<"Value found!"<<endl;
}
else{
	cout<<"Not found!";
}
	return 0;
}
