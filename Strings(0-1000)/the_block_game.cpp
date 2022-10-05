#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,len;
	cin>>t;
	while(t--){
	    string n;
	    bool flag=true;
	    cin>>n;
	    len=n.length();
	    for(int i=0;i<len;i++){
	        if(n[i]!=n[len-1-i]){
	            flag=false;
	        }
	    }
	    if(flag==true){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
