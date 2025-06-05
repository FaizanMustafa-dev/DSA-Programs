#include<iostream>
using namespace std;
int hamza(int a){
	
	a++;
	return a;
}
int hamzaa(int a){

	int sum=0;
	int mult=1;
	for(int i=a;i>=1;i--){
		mult=mult*i;
	
	}
	return mult;
}
int main(){
int arr[3][3];
arr[0][0]=1;
arr[0][1]=2;
arr[0][2]=3;
arr[1][0]=4;
arr[1][1]=5;
arr[1][2]=6;
arr[2][0]=7;
arr[2][1]=8;
arr[2][2]=9;


int a;
cin>>a;

cout<<"Facotial : "<<hamzaa(a);





	
	
	return 0;
}
/*

ABCDE
ABCD
ABC
AB
A


for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
int *a=&arr[1][1];
cout<<*a;



1 2 3
4 5 6 
7 8 9




A
AB
ABC
ABCD
ABCDE




for(char i='E';i>='A';i--){
		
		for(char j='A';j<=i;j++){
			cout<<j;
		}
		cout<<endl;
		
	}
	
	cout<<endl<<endl;
	for(char i='A';i<='E';i++){
		
		for(char j='A';j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
	


*/
