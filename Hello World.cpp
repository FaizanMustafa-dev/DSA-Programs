#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
class Stack{
	
	private:
		static const int size=100;
		int top;
		int arr[100];
	public:
		Stack(){
			top=-1;
		}
		void push(int a){
			if(top==(size-1)){
				//cout<<"Stack overflow occur"<<endl;
			}
			else{
				top++;
				arr[top]=a;
			}
		}
		void pop(){
			if(top!=-1){
				top--;
			}
			else{
				//cout<<"Stack underflow occur!"<<endl;
			}
		}
		int peek(){
			return arr[top];
		}
		void dipslay(){
			if(top!=-1){
				for(int i=top;i>=0;i--){
					cout<<arr[i]<<" ";
				}
			}
		}
		
		
};
int prefix(string str){
	Stack s1;
for(int i=str.length()-1;i>=0;i--){
	if(str[i]>='0' && str[i]<='9'){
		s1.push(str[i]-'0');
	}
	else{
		int oper1=s1.peek();
		s1.pop();
		int oper2=s1.peek();
		s1.pop();
		switch(str[i]){
			case '+':{
				s1.push(oper1+oper2);
				break;
			}
			case '-':{
				s1.push(oper1-oper2);
				
				break;
			}
			case '*':{
				s1.push(oper1*oper2);
				break;
			}
			case '/':{
				s1.push(oper1/oper2);
				break;
			}
			case '^':{
				s1.push(pow(oper1,oper2));
				break;
			}
		}
	}
}

	return s1.peek();
}
int postfix(string str) {
    Stack s1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            s1.push(str[i] - '0');
        } else {
            int oper2 = s1.peek();
            s1.pop();
            int oper1 = s1.peek();
            s1.pop();

            switch (str[i]) {
                case '+': {
                    s1.push(oper1 + oper2);
                    break;
                }
                case '-': {
                    s1.push(oper1 - oper2);
                    break;
                }
                case '*': {
                    s1.push(oper1 * oper2);
                    break;
                }
                case '/': {
                    s1.push(oper1 / oper2);
                    break;
                }
                case '^': {
                    s1.push(pow(oper1, oper2));
                    break;
                }
            }
        }
    }

    return s1.peek();
}
int main(){
cout<<prefix("-+7*45+20")<<endl;
cout<<postfix("46+2/5*7+")<<endl;

	return 0;
}
