#include<iostream>
#include<stack>
using namespace std;
bool isempty(int &top){
	return (top==-1);
}
bool isfull(int &top,int max){
	return (top==max-1);
}
void peek(int arr[],int &top){
	if(isempty(top)){
		cout<<"Stack is empty no peek value..!"<<endl;
	}
	else{
		cout<<"The value at top is : "<<arr[top]<<endl;
	}
}
void push(int arr[],int &top,int &max){
	int val;
	cout<<"Enter value to push : ";
	cin>>val;
	if(isfull(top,max)){
		cout<<"Stack overflow occur..!"<<endl;
		
	}
	else{
		top++;
		arr[top]=val;
		cout<<"Value succesfullt pushed..!"<<endl;
		
	}
}
void pop(int arr[],int &top){
	if(isempty(top)){
		cout<<"Stack underflow occur..!"<<endl;
	}
	else{
		top--;
		cout<<"Value from the peek is deleted..!"<<endl;
	}
}
void display(int arr[],int top){
	cout<<"Stack values are : ";
	for(int i=top;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void reverseString(string str){
	stack<string> st;
	for(int i=0;i<str.length();i++){
		string word="";
		
		while(str[i]!=' ' && i<str.length()){
			word+=str[i];
			i++;
			
		}
		st.push(word);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main(){
	string me="String Reversed is This";
	reverseString(me);

	/*
	int choice=1;
	int top=-1;
	int size;
	cout<<"Enter the size of stack : ";
	cin>>size;
	int arr[size];

	cout<<"1-Push value"<<endl;
	cout<<"2-Pop Value"<<endl;
	cout<<"3-Peek Value"<<endl;
	cout<<"4-Check if stack is Full"<<endl;
	cout<<"5-Check if stack is Empty"<<endl;
	cout<<"6-Check Size of stack"<<endl;
	cout<<"7-Display Values "<<endl;
	cout<<"Enter -1 to exit"<<endl;

while(choice!=-1){
cout<<"Enter your choice : ";
cin>>choice;
	switch(choice){
		case 1:{
			push(arr,top,size);
			break;
		}
		case 2:{
			pop(arr,top);
			break;
		}
		case 3:{
			peek(arr,top);
			break;
		}
		case 4:{
			if(isfull(top,size)){
				cout<<"Stack is full"<<endl;
			}
			else{
				cout<<"Stack is not full"<<endl;
			}
			break;
		}
		case 5:{
			if(isempty(top)){
			cout<<"Stack is empty"<<endl;	
			}
			else{
				cout<<"Stack is not empty"<<endl;
			}
			break;
		}
		case 6:{
			cout<<"The size of stack is : "<<size<<endl;
			break;
		}
		case 7:{
			if(top==-1){
				cout<<"Stack is emtpy..!"<<endl;
			}
			else{
				
			
			display(arr,top);
			break;
		}
		}
		default:{
			cout<<"You enter worng choice..!"<<endl;
			break;
		}
	}
}
	*/
	return 0;
}
