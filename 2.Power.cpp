#include<iostream>
using namespace std;
int power(int n,int r){
    
	if(n==0){
		return 1;
	}
	return r*power(n-1,r);
}
int main(){
	int n,r;
	cin>>n>>r;
	int ans=power(n,r);
	cout<<ans;
}
