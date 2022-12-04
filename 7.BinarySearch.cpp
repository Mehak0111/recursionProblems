#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int k){
	//base case
	if(s>e)
	return false;
	int mid=s+(e-s)/2;
	if(arr[mid]<k){
		return true;
	}
	if(arr[mid]<k){
		return binarySearch(arr,mid+1,e,k);
	}
	else{
		return binarySearch(arr,s,mid-1,k);
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<binarySearch(arr,0,n-1,k);
}
