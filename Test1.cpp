#include <iostream>
using namespace std;
int main() {
int size;
cout<<"Enter the size of array : ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
	cout<<"Enter the value : ";
	cin>>arr[i];
}
int val;
int index=-1;
cout<<"Enter value to search : ";
cin>>val;
for(int i=0;i<size;i++){
	if(arr[i]==val){
		index=i;
	}
}
if(index!=-1){
	cout<<"Value found at : "<<index<<" index";
}
else{
	cout<<"Value not found!"<<endl;
}
    return 0;
}
