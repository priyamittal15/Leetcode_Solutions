// Problem: Find a Fixed Point (Value equal to index) in a given array
//Solution:code

#include<iostream>
using namespace std;

int main(void)
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  
  for(int i=1;i<=n;i++){
  	if(a[i]==i){
  		cout<<"Fixed Point Found: "<<i<<"\n";
	  }
  }
    	
}

