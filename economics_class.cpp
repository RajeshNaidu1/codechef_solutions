#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0,a1[n],a2[n];
	    for(int i=0;i<n;i++){
	        cin>>a1[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>a2[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a1[i]==a2[i]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}