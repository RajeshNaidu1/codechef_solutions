#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,sum;
	    cin>>a>>b>>c;
	    int arr[3]={a,b,c};
	    sort(arr,arr+3);
	    sum=arr[1]+arr[2];
	    cout<<sum<<endl;
	}
}
