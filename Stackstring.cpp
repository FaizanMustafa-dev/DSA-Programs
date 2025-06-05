#include<iostream>
using namespace std;
class Stack{
	
	static const int size=500;
	int top;
	int str[size];
	public:
		Stack(){
			top=-1;
		}
		
	bool isempty(){
		return (top==-1);
	}
	bool isfull(){
		return (top==size-1);
	}
	void push(int data){
		if(isfull()){
			cout<<"Stack overflow occur"<<endl;
		}
		else{
			top++;
			str[top]=data;
			cout<<"Data succefuly inserted"<<endl;
		}
	}
	void pop(){
		if(isempty()){
			cout<<"Stack underflow occur"<<endl;
		}
	}
	void display(){
		for(int i=top;i>=0;i--){
			cout<<str[i]<<" ";
		}
		cout<<endl;
	}
	void peek(){
		cout<<str[top];
	}
};
int main(){
	Stack st;
	cout << "-------------------------" << endl;
cout << "      Stack Menu         " << endl;
cout << "-------------------------" << endl;
cout << "  1 - Push Value         " << endl;
cout << "  2 - Pop Value          " << endl;
cout << "  3 - Peek Value         " << endl;
cout << "  4 - Check if Full      " << endl;
cout << "  5 - Check if Empty     " << endl;
cout << "  7 - Display Values     " << endl;
cout<<"   -1-Exit"<<endl;
cout << "-------------------------" << endl;
	int choice;
	do{
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case 1 :{
				
				int data;
				cout<<"Enter how many values you want to insert : ";
				cin>>data;
				int arr[data];
				for(int i=1;i<=data;i++){
					cout<<"Enter "<<i<<"th value ; ";
					cin>>arr[i];
				}
				for(int i=1;i<=data;i++){
				
					st.push(arr[i]);
				}
				
				break;
			}
			case 7:{
				st.display();
				break;
			}
		}
	}while(choice!=-1);
	return 0;
}
