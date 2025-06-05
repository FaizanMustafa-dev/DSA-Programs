#include<iostream>
using namespace std;
int main(){
		for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
		cout<<endl<<endl;
	
		for(int i=1;i<=3;i++){
		for(int j=3;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
		for(int i=4;i>=1;i--){
			for(int j=1;j<i;j++){
				cout<<" ";
			}
			for(int k=i;k<=4;k++){
				cout<<"*";
			}
			cout<<endl;
			
		}
		cout<<endl;
		for(int i=1;i<=3;i++){
			for(int j=1;j<i;j++){
				cout<<" ";
			}
			for(int k=0;k<=3-i;k++){
				cout<<"*";
			}
			cout<<endl;
			
		}
		cout<<endl<<endl;
	
    for(int i=1;i<=4;i++){
      	
    	for(int j=1;j<=4;j++){
    		 	if(i==1 || i==4 || j==1 || j==4){
    		cout<<"*";
    	}
    	else{
    		cout<<" ";
		}
		}
	
		cout<<endl;
	}
	cout<<endl<<endl;
	
		for(int i=1;i<=3;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
		for(int i=1;i<=2;i++){
		for(int j=2;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	
	int j;
for(int i=1;i<=5;i++){
	cout<<"*";
	for( j=1;j<=i;j++){
		if(j==i){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
	}
	for(int k=j;k<=5;k++){
	if(k==5){
		cout<<"*";
	}
	else{
		cout<<" ";
	}
	}
	cout<<endl;
}


	  
	return 0;
}
/*

**    *
* *   *
*  *  *
*   * *
*    **
*/

/*

*/
