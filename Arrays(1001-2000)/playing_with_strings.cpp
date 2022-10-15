#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count1=0,count2=0;
	    string r,s;
	    cin>>n>>r>>s;
	    for(int i=0;i<n;i++){
	        if(r[i]=='0'){
	            count1++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            count2++;
	        }
	    }
	    if(count1==count2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
