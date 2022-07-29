// Question: Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.

//Solution: Code:

#include<iostream>
using namespace std;

struct Student{
	char name[20];
	int roll_no;
	int age;
};
struct Student stu[5];

int main(void)
{
  
  for(int i=1;i<=5;i++){
  	cout<<"Student"<<i<<"\n";
  	cout<<"Name: ";
  	cin>>stu[i].name;
  	cout<<"Roll_no: ";
  	cin>>stu[i].roll_no;
  	cout<<"Age: ";
  	cin>>stu[i].age;
  }
  
  for(int i=1;i<=5;i++){
  	if(stu[i].roll_no==2){
  		cout<<"Details Are: "<<"\n";
  		cout<<"Name: "<<stu[i].name<<"\n";
  		cout<<"Roll_no: "<<stu[i].roll_no<<"\n";
  		cout<<"Age: "<<stu[i].age<<"\n";
	  }
  }
 
 	
}
