#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,count=0;
	    cin>>n>>x;
	    int arr[n+1];
	    string s;
	    cin>>s;
	    arr[0]=x;
	    int len=sizeof(arr)/sizeof(arr[0]);
	    for(int i=0;i<n;i++){
	        if(s[i]=='R'){
	            arr[i+1]=x+1;
	            x++;
	        }
	        else{
	            arr[i+1]=x-1;
	            x--;
	        }
	    }
	    sort(arr,arr+len);
	    for(int i=0;i<len;i++){
	        if(arr[i]!=arr[i+1]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
