#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    if(a<=c&&b<=d){
	        cout<<"POSSIBLE"<<endl;
	    }
	    else{
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}
