#include <iostream>
using namespace std;
int main() {
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    
   int arr[size];
   for(int i=0;i<size;i++){
       cout<<"Enter the "<<i+1<<" value : ";
       cin>>arr[i];
   }
   int max=arr[0];
   int min=arr[0];
   
 int num;
 cout<<"Enter number to search : ";
 cin>>num;
 int index=-1;
 for(int i=0;i<size;i++){
     if(arr[i]==num){
         index=i;
     }
     if(arr[i]>max){
     	max=arr[i];
	 }
	 if(arr[i]<min){
	 	min=arr[i];
	 }
 }
 if(index!=-1){
     cout<<"The number ("<<num<<") is present at "<<index<<endl;
 }
else{
    cout<<"Key not found";
}
cout<<endl<<"The maximum among the array is : "<<max;
cout<<endl<<"The minimum among the array is : "<<min<<endl<<endl;
int user;
cout<<"Enter -1 if you dont want to delete,and press any other number if you want to delete :";
cin>>user;
if(user!=-1){
	
int del;
cout<<"Enter the index to delete : ";
cin>>del;
for(int i=del;i<size-1;i++){
	arr[i]=arr[i+1];
}

size;
cout<<endl<<"The array after deletion : ";
for(int i=0;i<size;i++){
	cout<<arr[i]<<endl;
}
}
else{
	cout<<"Program ends";
}

    return 0;
}









