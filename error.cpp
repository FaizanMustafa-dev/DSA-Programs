#include<iostream>
#define n 5
using namespace std;
class Queue{
	int front;
	int back;
	int arr[5];
	public:
	 Queue(){
		front=back=-1;
	}
	void enqueue(int val){
		if(!isfull()){
			if(front==-1){
				front++;
				
			}
			back=(back+1)%n;
				arr[back]=val;
			
		}
		else{
			cout<<"Stack is full"<<endl;
		}
	}
	
    void dequeue(){
    	if(!isempty()){
    	if(front==back){
    		front=back=-1;
		}
		else{
			front=(front+1)%n;
		}
		}
		else{
			cout<<"Queue is empty!"<<endl;
		}
		
	}
	bool isfull(){
		return ((back+1)%n)==front;
	}
	bool isempty(){
		return ((back==-1)|| (front==-1));
	}
	int peek(){
		if(isempty()){
			return -1;
		}
		return arr[front];
	}
 void display(){
        if(isempty()){
            cout << "Queue is empty" << endl;
        } else {
            int i = front;
            while (i <= back) {
                cout << arr[i] << " ";
                i = (i + 1) % n;
            }
            cout << arr[back] << endl;
        }
    }
};
int main() {
    Queue myQueue;
    
    int choice, value;

    do {
        cout << "\nQueue Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Check if Queue is Full\n";
        cout << "5. Check if Queue is Empty\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            	int n1;
                Size:
                cout<<"Enter how many values you want to push : ";
                cin>>n1;
                if(n<=0){
                	cout<<"	Please enter 1 or greater value!"<<endl<<endl;
                	goto Size;
                	
				}
				if(n1<=n){
				int arr[n1];
				for(int i=0;i<n1;i++){
					cout<<"Enter value for "<<i+1<<" : ";
					cin>>arr[i];
				}
				for(int i=0;i<n1;i++){
				myQueue.enqueue(arr[i]);
				}
			}
    
                break;
            case 2:
                myQueue.dequeue();
                break;
            case 3:
                value = myQueue.peek();
                if (value != -1) {
                    cout << "Front value: " << value << endl;
                } else {
                    cout << "Queue is empty!" << endl;
                }
                break;
            case 4:
                if (myQueue.isfull()) {
                    cout << "Queue is full\n";
                } else {
                    cout << "Queue is not full\n";
                }
                break;
            case 5:
                if (myQueue.isempty()) {
                    cout << "Queue is empty\n";
                } else {
                    cout << "Queue is not empty\n";
                }
                break;
            case 6:
                myQueue.display();
                break;
            case 7:
                cout << "Exiting program\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 7);

    return 0;
}
