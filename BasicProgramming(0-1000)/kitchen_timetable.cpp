#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        if(i==0){
	            if(a[0]>=b[0]){
	                count++;
	            }
	        }
	        else{
	            if(a[i]-a[i-1]>=b[i]){
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
