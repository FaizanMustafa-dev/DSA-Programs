#include <iostream>
using namespace std;
int main() {
    int choice;
    cout<<"Enter 1 to do binaray search and enter 2 to do linear search : ";
    cin>>choice;
    if(choice==1){
        int arr[]={1,2,3,4,5};
         int size = sizeof(arr) / sizeof(arr[0]);
         int start=arr[0];
         int end=arr[size-1];
         int mid=(start+end)/2;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"  ";
        }
        int index=-1;
        int number;
        cout<<"Enter number to search in array : ";
        cin>>number;
        while(start<=end){
        	mid=(start+end)/2;
        	if(number==arr[mid]){
        		index=mid;
        		cout<<"value found at "<<index;
        		break;
			}
			else if(number<arr[mid]){
				end=mid-1;
			}
			else if(number>arr[mid]){
				start=mid+1;
			}
		}
		if(index==-1){
			cout<<"Given value not found.";
		}
    }
    else if(choice==2){
        int size;
        cout<<"Enter the size of array : ";
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cout<<"Enter the "<<i<<"th value : ";
            cin>>arr[i];
        }
        int num;
        int index=-1;
        cout<<"Enter the number to search in array : ";
        cin>>num;
        for(int i=0;i<size;i++){
            if(arr[i]==num){
                index=i;
            }
        }
        if(index!=-1){
            cout<<"The given number is present at "<<index<<" in array.";
        }
        else{
            cout<<"Given number not found.";
        }
    }
    else{
        cout<<"You enter wrong choice.";
    }

    return 0;
}
