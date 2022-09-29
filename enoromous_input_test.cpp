#include <bits/stdc++.h> 

using namespace std;

int main() {
	int n,k,t;
	int count=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    cin>>t;
	    if(t%k==0){
	        count++;
	    }
	}
	cout<<count;
}