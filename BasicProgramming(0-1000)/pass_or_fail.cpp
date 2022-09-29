#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int m;
	    m=(x*3)-(n-x);
	    if(m<p){
	        cout<<"FAIL"<<endl;
	    }
	    else{
	        cout<<"PASS"<<endl;
	    }
	}
	return 0;
}