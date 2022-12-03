#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target){
	if(n==0)
	return false;
	if(arr[0]==target){
		return true;
	}
	else{
		bool ele=linearSearch(arr+1,n-1,target);
		return ele;
	}	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	bool ans=linearSearch(arr,n,target);
	if(ans){
		cout<<"Present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}
}
