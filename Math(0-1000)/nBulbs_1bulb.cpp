#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    string a1,a2;
	    cin>>a1>>a2;
	    for(int i=0;i<n;i++){
	        if(a2[i]!=a1[i]){
	            count++;
	        }
	    }
	    if(count==0){
	        cout<<"1"<<endl;
	    }
	    else if(count==1){
	        cout<<"0"<<endl;
	    }
	    else if(count%2==0){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
