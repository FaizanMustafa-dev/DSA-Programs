#include<iostream>
using namespace std;
int main(){
	cout<<(-1+1)%5;
	
	return 0;
}

















































/*

#include<iostream>
#include<stack>
using namespace std;
class Stack{
	private :
	static const int size=100;
	int str[size];
	int top;
	public:
		Stack(){
			top=-1;
		}
		
		void push(){
			int word;
			cout<<"Enter value  to push : ";
			cin>>word;
			if(top==size-1){
				cout<<"Stack overflow occur!"<<endl;
			}
			else{
				top++;
				str[top]=word;
				cout<<"Succesfully Pushed..!"<<endl;
			}
		}
			void push(int word){
			
			if(top==size-1){
				cout<<"Stack overflow occur!"<<endl;
			}
			else{
				top++;
				str[top]=word;
			
			}
		}
		void pop(){
			if(top==-1){
				cout<<"Stack undetflow occur..!"<<endl;
			}
			else{
				top--;
				cout<<"Value from the top ("<<str[top]<<") is poped!"<<endl;
				
			}
		}
		void peek(){
			cout<<"The peek value is : "<<str[top]<<endl;
		}
		bool isfull(){
			return(top==size-1);
		}
		bool isEmpty(){
			return (top==-1);
		}
		void display(){
	cout<<"Stack values are : "<<endl<<"{ ";
			for(int i=top;i>=0;i--){
				cout<<str[i]<<", ";
			}
			cout<<"}"<<endl;
		}
		void stacksize(){
			cout<<"The current size of stack is : "<<top+1<<endl;
			cout<<"The maximum size of stack is : "<<size<<endl;
			cout<<"You can add "<<size-(top+1)<<" more values."<<endl;	
				}
		void reversestack(){
 if (isEmpty() || top == 0) {
        cout << "Stack is empty." << endl;
        return;
    }

    int start = 0;
    int end = top;

    while (start < end) {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    cout << "Stack is reversed." << endl;
		}
	bool search(int value){
		for(int i=top;i>=0;i--){
		
		if(value==str[i]){
			return true;
		}
	}
	return false;
	}
	void sortstack(){
		for(int i=top;i>=0;i--){
			for(int j=top;j>=0;j--){
				if(str[j]>str[i]){
					int temp=str[i];
					str[i]=str[j];
					str[j]=temp;
				}
			}
		}
	}
	
};

void displayMenu() {
cout << "-------------------------" << endl;
cout << "      Stack Menu         " << endl;
cout << "-------------------------" << endl;
cout << "  1 - Push Value         " << endl;
cout << "  2 - Pop Value          " << endl;
cout << "  3 - Peek Value         " << endl;
cout << "  4 - Check if Full      " << endl;
cout << "  5 - Check if Empty     " << endl;
cout << "  6 - Check Size         " << endl;
cout << "  7 - Display Values     " << endl;
cout << "  8 - Search  Value      " << endl;
cout << "  9 - Sort Full Stack    " << endl;
cout << "  10- Reverse the Stack  " << endl;
cout << " -1 - Exit               " << endl;
cout << "-------------------------" << endl;


}
int main() {
cout<<endl;
 Stack s1;
stack<int> myStack;

    int choice = 0;
    string value;
displayMenu();
    while (choice != -1) {
        
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:{
			
                int n;
                Size:
                cout<<"Enter how many values you want to push : ";
                cin>>n;
                if(n<=0){
                	cout<<"	Please enter 1 or greater value!"<<endl<<endl;
                	goto Size;
                	
				}
				int arr[n];
				for(int i=0;i<n;i++){
					cout<<"Enter value for "<<i+1<<" : ";
					cin>>arr[i];
				}
				for(int i=0;i<n;i++){
					s1.push(arr[i]);
				}
				cout<<"All value succesfully pushed!"<<endl;
                
                	break;
			}
            case 2:{
			
            	if (s1.isEmpty()) {
                    cout << "Stack is empty cannot pop" << endl;
                } else{
				
                s1.pop();
            }
               	break;
			}
            case 3:
                s1.peek();
                break;
            case 4:
                if (s1.isfull()){
                    cout << "Stack is Full." << endl;
                } else {
                    cout << "Stack is not Full." << endl;
                }
                break;
            case 5:
                if (s1.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                break;
            case 6:
                s1.stacksize();
                break;
            case 7:{
            	if (s1.isEmpty()) {
                    cout << "Stack is empty cannot display!" << endl;
                }
                else{
                s1.display();
				}
				break;
			}
                

            case 8:{
            	int value;
            	cout<<"Enter value to search : ";
            	cin>>value;
            	if(s1.search(value)){
            		cout<<value<<" is presnt in stack !"<<endl;
				}
				else{
					cout<<value<<" is not present in stack"<<endl;
				}
				break;
			}
			case 9:{
				if(s1.isEmpty()){
					cout<<"Stack is empty cannot sort!"<<endl;
				}
				else{
				
				s1.sortstack();
				cout<<"Stack is sorted succefully!"<<endl;
			}
				break;
			}
			case 10:{
				if(s1.isEmpty()){
					cout<<"Stack is empty cannot reverse!"<<endl;
				}
				else{
				
				s1.	reversestack();
				cout<<"Stack is reversed Successfully!"<<endl;
			}
				break;
			}
            case -1:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    }

    return 0;
}

*/

/*
   Stack stack;
    Stack s1;
    string str="hy haal kia World Hello";
    cout<<"Before reverse : "<<str;
    cout<<endl<<"Aftr revrrse ; ";
    reverseString(str);
    cout<<endl;
    */



/*
void reverseString(string str){
	stack <char> st;
	for(int i=0;i<str.length();i++){
		char word=' ';
		word=str[i];
		st.push(word);
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}
*/
/*
void reverseString(int str){
	Stack st;
	for(int i=0;i<str.length();i++){
		int=" ";
		while(str[i]!=' ' && i<str.length()){
			word+=str[i];
			i++;
		}
	
		st.push(word);
	}
	while(!st.isEmpty()){
		st.peek();
		st.pop();
	}
}
*/

