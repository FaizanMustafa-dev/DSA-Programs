#include <iostream>
using namespace std;
int main() {	
	int size;
	cout<<"Enter the size of array : ";
	
	cin>>size;
	int arr[size];
	
for(int i=0;i<size;i++){
	cout<<"Enter "<<i<<"th value : ";
	cin>>arr[i];
}
int val;
bool flag=false;
cout<<"Enter value to search  : ";
cin>>val;
int start=0;
int end=size-1;
while(start<end){
	int mid=(start+end)/2;
	if(arr[mid]==val){
		cout<<"Value found at "<<mid<<" index of array : ";
		flag=true;
		break;
	}
	else if(arr[mid]<val){
		start=mid+1;
	}
	else if(arr[mid]>val){
		end=mid-1;
	}
}
if(!flag){
	cout<<"Value not dound!"<<endl;
}

    return 0;
}

