#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    double p,p1,p2;
	    double throw1=0,throw2=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==a){
	            throw1++;
	        }
	    }
	    p1=throw1/n;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]==b){
	            throw2++;
	        }
	    }
	    p2=throw2/n;
	    p=p1*p2;
	     cout<<fixed<<setprecision(10)<<p<<endl;
	}
	return 0;
}
