#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    int t1=0;
	    cin>>x>>y>>z;
	    if(x<=3){
	        cout<<x*y<<endl;
	    }
	    if(x>3){
	        while(x>0){
	            if(x>3){
	                t1=t1+(3*y)+z;   
	            }
	            else{
	                t1=t1+(x*y);
	            }
	            x=x-3;
	        }
	        cout<<t1<<endl;
	    }
	}
	return 0;
}