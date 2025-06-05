#include<iostream>
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
			if(isEmpty()){
				cout<<"Stack is empty"<<endl;
			}
			else{
			
			cout<<"The peek value is : "<<str[top]<<endl;
		}
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
	
	
};

int main() {

 Stack s1;
cout<<"---------------------------"<<endl;
cout<<"    Student Information    "<<endl;
cout<<"---------------------------"<<endl;
cout<<"    Name  : Faizan Mustafa "<<endl;
cout<<"    Regno : FA22-BCS-027   "<<endl;
cout<<"---------------------------"<<endl;
cout<<endl<<endl<<endl;
cout << "-------------------------" << endl;
cout << "      Stack Menu         " << endl;
cout << "-------------------------" << endl;
cout << "  1 - Push Value         " << endl;
cout << "  2 - Pop Value          " << endl;
cout << "  3 - Peek Value         " << endl;
cout << "  4 - Check if Full      " << endl;
cout << "  5 - Check if Empty     " << endl;
cout << "  6 - Display Values     " << endl;
cout << " -1 - Exit               " << endl;
cout << "-------------------------" << endl;
    int choice;
    do{
    	
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
				char ans;
                cout<<"You want to perform more funtionelties or not(y/n): ";
                cin>>ans;
                if(ans=='n'){
                
                	goto exit;
				}
                	break;
			}
            case 2:{
			
            	if (s1.isEmpty()) {
                    cout << "Stack is empty cannot pop" << endl;
                } else{
				
                s1.pop();
            }
            	
				char ans;
                cout<<"You want to perform more funtionelties or not(y/n): ";
                cin>>ans;
                if(ans=='n'){
                
                	goto exit;
				}
               	break;
			}
            case 3:
                s1.peek();
                
				char ans;
                cout<<"You want to perform more funtionelties or not(y/n): ";
                cin>>ans;
                if(ans=='n'){
                
                	goto exit;
				}
                break;
            case 4:{
			
                if (s1.isfull()){
                    cout << "Stack is Full." << endl;
                } else {
                    cout << "Stack is not Full." << endl;
                }
                	
				char ans;
                cout<<"You want to perform more funtionelties or not(y/n): ";
                cin>>ans;
                if(ans=='n'){
                
                	goto exit;
				}
				
                break;
            }
            case 5:{
			
                if (s1.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                	
				char ans;
                cout<<"You want to perform more funtionelties or not(y/n): ";
                cin>>ans;
                if(ans=='n'){
                
                	goto exit;
				}
                break;
}
            case 6:{
            	if (s1.isEmpty()) {
                    cout << "Stack is empty cannot display!" << endl;
                }
                else{
                s1.display();
				}
					
				char ans;
                cout<<"You want to perform more funtionelties or not(y/n): ";
                cin>>ans;
                if(ans=='n'){
                
                	goto exit;
				}
				break;
			}
			case -1 :{
				goto exit;
				break;
			}
                
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    
}
    while (choice != -1);
        
exit:
cout<<"Exiting.."<<endl;
    return 0;
}


