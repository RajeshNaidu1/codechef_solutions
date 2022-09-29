#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,k,t;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    if((m-k)>=n){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }   
	}
	return 0;
}