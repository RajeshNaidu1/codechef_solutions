#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,p,q;
	    cin>>x>>y>>p>>q;
	    if(x+(10*p)>y+(10*q)){
	        cout<<"Chefina"<<endl;
	    }
	    else if(x+(10*p)==y+(10*q)){
	        cout<<"Draw"<<endl;
	    }
	    else{
	        cout<<"Chef"<<endl;
	    }
	}
	return 0;
}