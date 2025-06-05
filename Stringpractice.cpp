#include<iostream>
using namespace std;
int main(){
	cout<<"How many Names you want to enter : ";
	int n;
	cin>>n;
	string name[n];
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,name[i]);
	}
	
	string sec[n];

	
	for(int j=0;j<n;j++){
		sec[j]=name[j];
	}
	for(int i=0;i<n;i++){
		cout<<"Name : "<<sec[i];
	}
	return 0;
}
