#include<iostream>
using namespace std;

int main(void){
	int arr[]={0,-9,1,3,-4,5};
	int n=6;
	
	int res[n];
	
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			res[i]=arr[i];
		}
		else{
		 	
		}
	}
	
	
	for(int i=0;i<n;i++){
		cout<<res[i];
	}
	
	
	for(int i=0;i<n;i++){
		if(res[i+1]-res[i]==2){
			cout<<i;
		}
	}
}
