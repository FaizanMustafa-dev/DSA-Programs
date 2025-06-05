#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of array : ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
	cout<<"Enter the "<<i<<"th value : ";
	cin>>arr[i];
}
int del;
cout<<"Enter the index to delete : ";
cin>>del;
for(int i=del;i<size;i++){
	arr[i]=arr[i+1];
}
for(int i=0;i<size-1;i++){
	cout<<arr[i]<<"  ";
}
	return 0;
}
