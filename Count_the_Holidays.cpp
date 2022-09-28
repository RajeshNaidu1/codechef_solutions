#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=8;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]!=6&&a[i]!=7&&a[i]!=13&&a[i]!=14&&a[i]!=20&&a[i]!=21&&a[i]!=27&&a[i]!=28){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
