#include<iostream>
using namespace std;
class queue{
	int front,back,capacity;
	int* arr;
	public:
		queue(int size){
			capacity=size;
			arr=new int[size];
			front=back=-1;
		}
		
		
		
	void enqueue(int data){
		if(back==capacity-1){
		cout<<"Queue overflow occur"<<endl;
		}
		back++;
		arr[back]=data;
		if(front==-1){
			front++;
		}
	}
	void dequeue(){
		if(front==-1 && front>back){
			cout<<"Queue underflow!"<<endl;
			return;
		}
		front++;
    
	}
	void display(){
		for(int i=0;i<=back;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	
queue q1(5);
q1.enqueue(1);
q1.enqueue(2);
q1.enqueue(3);
q1.enqueue(4);
q1.enqueue(5);
q1.display();

	return 0;
}
