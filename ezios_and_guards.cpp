#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n1,n2;
	    cin>>n1>>n2;
	    if(n1>n2){
	        cout<<"YES"<<endl;
	    }
	    else if(n1==n2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
