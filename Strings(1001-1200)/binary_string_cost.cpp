#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,x,y;
	    cin >> n >> x >> y;
	    string s;
	    cin >> s;
	    int count = 0;
	    for(int i=0;i<n-1;i++){
	        if(s[i] != s[i+1]){
	            count++;
	        }
	    }
	    if(count == 0){
	        cout << 0 << endl;
	    }
	    else{
	        cout << min(x,y) << endl;
	    }
	}
	return 0;
}