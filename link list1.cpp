#include<iostream>
using namespace std;
class node {
	public:
		int data;
		node* next;

		node(int val) {

			data=val;
			next=NULL;
		}
};
void insert(node* &head,int val) {
	node* n=new node(val);
	if(head==NULL) {
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL) {
		temp=temp->next;
	}
	temp->next=n;
}

void display(node* head) {
	node* temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
	cout<<endl;
}

bool search(node* head,int key) {
	node* temp=head;
	while(temp!=NULL) {
		if(temp->data==key) {
			return true;
		}

		temp=temp->next;
	}
	return false;
}

int main() {
	node* head=NULL;
	int choice;
	cout<<endl<<"------Link List------"<<endl;
	cout<<"      1-Insert."<<endl;
	cout<<"      2-Display."<<endl;
	cout<<"      3-Search and element."<<endl;




	while(true) {

		cout<<endl<<"Enter your choice : ";
		cin>>choice;

		switch(choice) {
			case 1: {
				int input;
				cout<<"How manay values you want to add : ";
				cin>>input;
				int arr[input];
				for(int i=0; i<input; i++) {
					cout<<"Enter value "<<i+1<<" : ";
					cin>>arr[i];
				}
				for(int i=0; i<input; i++) {

					insert(head,arr[i]);

				}


				break;
			}
			case 2: {

				if(head!=NULL) {
					display(head);
				} else {
					cout<<"The link list is empty"<<endl;

				}

				break;
			}
			case 3: {
				int input;
				cout<<"Enter value to search : ";
				cin>>input;
				if(search(head,input)) {

					cout<<"Value found"<<endl;
				} else {
					cout<<"Value not found"<<endl;
				}

				break;
			}

			default: {
				cout<<"You enter wrong choice!"<<endl;

				break;
			}
		}
		string againchoice;
		cout<<"You want to perform more funtioneleties or not (y/n) ; ";
		cin>>againchoice;
		getline(cin,againchoice)
		if(againchoice=='n') {
			cout<<"Exiting.."<<endl;
			break;
		}
		cout<<"Returning to menu..."<<endl;
	}

	return 0;
}






