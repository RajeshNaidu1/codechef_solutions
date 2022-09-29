#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a==0&&b==0&&c==0)||(a==1&&b==1&&c==1)){
	        cout<<"0"<<endl;
	    }
	    else{
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}
