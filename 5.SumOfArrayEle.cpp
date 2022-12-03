#include<iostream>
using namespace std;
int sumofele(int arr[],int n){
	int sum=0;
	if(n==0)
	return 0;
	if(n==1){
		return arr[0];
	}
	
	return arr[0]+sumofele(arr+1,n-1);
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<sumofele(arr,n);
	
}
