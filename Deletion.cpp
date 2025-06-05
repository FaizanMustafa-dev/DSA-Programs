#include <iostream>
using namespace std;
void Seletionsort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		int index=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[index]){
				index=j;
			}
		}
		int temp=arr[index];
		arr[index]=arr[i];
		arr[i]=temp;
	}
	cout<<"Sorted succesfully..!"<<endl;
	
}
int main() {
int size=10;
int arr[size];
for(int i=0;i<size;i++){
	cout<<"Enter the value  : ";
	cin>>arr[i];
}

Seletionsort(arr,size);
cout<<"After sorting : ";
for(int i=0;i<size;i++){
	cout<<arr[i]<<" ";
}
    return 0;
}

