// Code for (Full Stack) Implementation: 

#include<iostream>
using namespace std;
int val;
int stack[100],n=100,top=-1;

//1.Function for push the element: 
void push(int val){
	if(top>=n-1){
		cout<<"Stack OverFlow!!!"<<"\n";
	}
	else{
		top++;
		stack[top]=val;
	}
}

//2.Function for pop the element:
void pop(){
	if(top<=-1){
		cout<<"Stack Underflow!!!"<<"\n";
	}
	else{
		cout<<"Popped Element : "<<stack[top]<<"\n";
	}
}

//3.Function for Display the stack:
void display(){
	if(top>=0){
	
	cout<<"Stack Elements are: ";
	for(int i=0;i<n;i++){
		cout<<stack[i]<<" ";
	}
}
else{
	cout<<"Stack is Empty"<<"\n";
}

}

//***********************main*********************************
int main(void)
{
	int ch;
	
	cout<<"***Stack Implementation***"<<"\n";
	cout<<"Menu Option's are: "<<"\n";
	cout<<"1.Push"<<"\n";
	cout<<"2.Pop"<<"\n";
	cout<<"3.Display"<<"\n";
	cout<<"4.Exit"<<"\n";
	do{
	
	cout<<"Enter Your Choice: ";
	cin>>ch;
	switch(ch){
		case 1:{
			cout<<"Enter Value to be push: ";
			cin>>val;
			push(val);
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			cout<<"***Exit Successfully!!! ***"<<"\n";
			break;
		}
	}
	
}while(ch!=4);


}
