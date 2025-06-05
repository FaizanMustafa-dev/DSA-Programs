#include<iostream>
using namespace std;
class Stack{
	
	private:
		static const int size=100;
		int top;
		int arr[100];
	public:
		Stack(){
			top=-1;
		}
		void push(int a){
			if(top==(size-1)){
				cout<<"Stack overflow occur"<<endl;
			}
			else{
				top++;
				arr[top]=a;
				cout<<"Value succesfuly inserted!"<<endl;
			}
		}
		void pop(){
			if(top!=-1){
				top--;
				cout<<"Value from the top is deleted!"<<endl;
			}
			else{
				cout<<"Stack underflow occur!"<<endl;
			}
		}
		int peek(){
			return arr[top];
		}
		void display(){
			if(top!=-1){
				for(int i=top;i>=0;i--){
					cout<<arr[i]<<" ";
				}
			}
			cout<<endl;
		}
	};
int main(){
Stack s1;

	int choice, value;
	cout << "Menu:" << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Peek" << endl;
		cout << "4. Display" << endl;
		cout << "0. Exit" << endl;

	do {
		
		cout << "Enter your choice: ";
		cin >> choice;

		switch(choice) {
			case 1:
				cout << "Enter value to push: ";
				cin >> value;
				s1.push(value);
				break;

			case 2:
				s1.pop();
				break;

			case 3:
				value = s1.peek();
				if(value != -1) {
					cout << "Top element: " << value << endl;
				}
				break;

			case 4:
				s1.display();
				break;

			case 0:
				cout << "Exiting program." << endl;
				break;

			default:
				cout << "Invalid choice. Please try again." << endl;
		}

	} while (choice != 0);

	return 0;
}
		

