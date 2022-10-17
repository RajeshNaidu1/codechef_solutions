#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--){
	    int sum=0;
	    string w;
	    cin>>w;
	    int len=w.length();
	    for(int i=0;i<s.length();i++){
	        for(int j=0;j<len;j++){
	            if(s[i]==w[j]){
	                w[j]=0;
	            }
	        }
	    }
	    for(int j=0;j<len;j++){
	        sum=sum+w[j];
	    }
	    
	    if(sum==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    
	}

}
