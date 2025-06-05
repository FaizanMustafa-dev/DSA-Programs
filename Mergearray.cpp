#include<iostream>
using namespace std;
void merger(int arr[],int l,int mid,int r){
	cout<<"klea";
}
void mergesort(int arr[],int left,int right){
	if(left<right){
	
	int mid=(sizeof(arr)/sizeof(arr[0]))/2;
	cout<<"Left : "<<left<<" right : "<<right<<" mid : "<<mid;
	mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merger(arr,left,mid,right);
}
//	int n1=mid-left+1;
//	int n2=right-mid;
	


}
int main(){
	int size;
cout<<"Enter size of array : ";
cin>>size;
int arr[size];

int left=0;
int right=size-1;
for(int i=0;i<size;i++){
	cout<<"Enter for value "<<i+1<<"  : ";
	cin>>arr[i];
}
mergesort(arr,left,right);
	return 0;
}

















/*
	int size1;
	cout<<"Enter the size of first array : ";
	cin>>size1;
	int array1[size1];
	int size2;
	cout<<"Enter the size of array two : ";
	cin>>size2;
	int array2[size2];
	cout<<"For 1st array : "<<endl;
	for(int i=0;i<size1;i++){
		cout<<"Enter value "<<i+1<<"  :  ";
		cin>>array1[i];
	}
	cout<<"For 2nd array :  "<<endl;
		for(int i=0;i<size2;i++){
		cout<<"Enter value "<<i+1<<"  :  ";
		cin>>array2[i];
	}
	int mergesize=size1+size2;
	int mergearray[mergesize];
	int count=0;
	for(int i=0;i<size1;i++){
		mergearray[count]=array1[i];
		count++;
	}
	for(int i=0;i<size2;i++){
		mergearray[count]=array2[i];
		count++;
	}
	cout<<"Merged array : "<<endl;
	for(int i=0;i<mergesize;i++){
		cout<<mergearray[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<mergesize;i++){
		for(int j=0;j<mergesize;j++){
			if(mergearray[i]<mergearray[j]){
				int temp=mergearray[i];
				mergearray[i]=mergearray[j];
				mergearray[j]=temp;
				
			}
		}
	}
	cout<<"Sorted merger array : ";
	for(int i=0;i<mergesize;i++){
		cout<<mergearray[i]<<" ";
	}
	cout<<endl;

*/
