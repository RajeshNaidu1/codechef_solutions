#include <iostream>
using namespace std;

int main() {
	// your code goes hereint t;
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<"SECOND"<<endl;
            
	    }
	    else if(a==b){
	        cout<<"ANY"<<endl;
	    }
	    else{
	        cout<<"FIRST"<<endl;
	    }
	}
	return 0;
}